#include <iostream>
using namespace std;
void showarray(string arr[], int size, bool free[])
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
		if (free[i] == true) { cout << "Free" << endl; }
		else { cout << "Not free" << endl; }
	}
	cout << endl;
}
void addnewantivirus(string arr[], int size, string antivirus, bool free[], bool free2)
{
	string* temp = new string[size + 1];
	bool* temp1 = new bool[size + 1];
	for (int i = 0; i < size; i++)
	{
		temp[i] = arr[i];
		temp1[i] = free[i];
	}
	temp[size] = antivirus;
	temp1[size] = free2;
	delete[]arr;
	delete[]free;
	arr = temp;
	free = temp1;
	size++;
}
int main()
{
	const int size = 8;
	string newantivirus;
	string free;
	bool free2;
	string exit;
	string antiviruses[size] = { "Avast", "Norton", "McAfee", "Bitdefender","Windovs defender","Norton","Zilya","ESET NOD32"};
	bool isfree[size] = { true, false, false, true, true, false, false, false };
	showarray(antiviruses, size, isfree);
	while (true) {
		cout << "Enter a new antivirus: "; cin >> newantivirus;
		cout << "is it free? "; cin >> free;
		if (free == "Yes" || free == "yes") { free2 = true; }
		else if (free == "no" || free == "No") { free2 = false; }
		else { cout << "Error 404" << endl; }
		addnewantivirus(antiviruses, size, newantivirus, isfree, free2);
		showarray(antiviruses, size, isfree);
		cout << "Do you want to exit? "; cin >> exit;
		if (exit == "Yes" || exit == "yes")
		{
			break;
		}
	}

}