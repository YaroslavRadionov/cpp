#include <iostream>
#include <fstream>
using namespace std;

const char* filename = "C:\\Users\\radio\\source\\repos\\cpp\\16 lesson\\Abonents.txt";
struct Abonent
{
private:
    char name[50];
    char surname[50];
    char middlename[50];
	int homephone;
	int workphone;
	int phone;
	char inf[50];
public:
    void Show()
    {
        cout << "Name :" << name << "\nSurname : " << surname << "\nMiddlename : "
            << middlename <<"\nHome phone : "<< homephone << "\nWork phone : "
            << "\nPhone : " << phone << "\nInformation : " << inf << endl;
    }
    void Fill()
    {
        cout << "Enter name : "; cin >> name;
        cout << "Enter surname : "; cin >> surname;
        cout << "Enter middlename : "; cin >> middlename;
        cout << "Enter home phone : "; cin >> homephone;
        cout << "Enter work phone : "; cin >> workphone;
        cout << "Enter phone : "; cin >> phone;
        cout << "Enter information : "; cin >> inf;
    }
    void SaveToFile()
    {
        ofstream out(filename, ios_base::app);
        out << name;
        out << ':';
        out << surname;
        out << ':';
        out << middlename;
        out << ':';
        out << homephone;
        out << ':';
        out << workphone;
        out << ':';
        out << phone;
        out << ':';
        out << inf;
        out << '|';
        out.close();
    }
    void CopyFromFile(char* nameF, char* surnameF, char* middlenameF, int homephoneF, int workphoneF, int phoneF, char* infF)
    {
        strcpy_s(name, nameF);
        strcpy_s(surname, surnameF);
        strcpy_s(middlename, middlenameF);
        strcpy_s(inf, infF);
		homephone = homephoneF;
		workphone = workphoneF;
		phone = phoneF;
        
    }

};
enum MENU { EXIT,ADD, SHOW };
int Menu()
{
    int choice;
    cout << "1. Show all abonents" << endl;
	cout << "2. Add abonent" << endl;
    cout << "0. Exit" << endl;
    cin >> choice;
    return choice;
}
void AddAbonent(Abonent*& arr, int& size)
{
    Abonent* temp = new Abonent[size + 1];
    for (int i = 0; i < size; i++)
    {
        temp[i] = arr[i];
    }
    temp[size].Fill();
    temp[size].SaveToFile();
    delete[]arr;
    size++;
    arr = temp;

}
void ShowAll (Abonent* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i].Show();
        cout << endl;
    }
}
void ReadFromFile(Abonent*& arr, int& size)
{
    ifstream in(filename, ios_base::in);
    char buff_name[250], buff_surname[250], buff_middlename[250], buff_inf[250], buff_homephone[250], buff_workphone[250], buff_phone[250];
    while (!in.eof())
    {
        in.getline(buff_name, 250, ':');
        if (in.eof())break;
        in.getline(buff_surname, 250, ':');
        in.getline(buff_middlename, 250, ':');
        in.getline(buff_homephone, 250, ':');
        in.getline(buff_workphone, 250, ':');
        in.getline(buff_phone, 250, ':');
        in.getline(buff_inf, 250, '|');

        int homephone = atoi(buff_homephone);
        int workphone = atoi(buff_workphone);
        int phone = atoi(buff_phone);

        Abonent readAbonent;
        readAbonent.CopyFromFile(buff_name, buff_surname, buff_middlename,homephone,workphone,phone, buff_inf);

        Abonent* temp = new Abonent[size + 1];
        for (int i = 0; i < size; i++)
        {
            temp[i] = arr[i];
        }
        temp[size] = readAbonent;
        delete[]arr;
        size++;
        arr = temp;
    }
}
int main()
{
    int size = 0;
    Abonent* abonents = new Abonent[size];
    ReadFromFile(abonents, size);
    bool isExit = false;
    while (!isExit)
    {
		
        switch (Menu())
        {
        case EXIT: isExit = true; break;
        case ADD: AddAbonent(abonents, size);break;
        case SHOW:ShowAll(abonents, size); break;
        }

    }

}






