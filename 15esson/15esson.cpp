#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
struct  Book
{
    unsigned short id;
    char name[50];
    char author[50];
    char genre[50];
    char vudavnutstvo[50];
    int year;
    float price;
};
void ShowOneBook(Book& book)
{
    cout << "Id : " << book.id << endl;
    cout << "Name : " << book.name << endl;
    cout << "Author : " << book.author << endl;
    cout << "Genre : " << book.genre << endl;
    cout << "Genre : " << book.vudavnutstvo << endl;
    cout << "Year : " << book.year << endl;
    cout << "Price : " << book.price << endl;
}
Book cinBook(Book& book)
{
    cin.ignore();
	cout << "Enter Id : ";cin >> book.id;
	cout << "Enter Name : ";cin >> book.name;
	cout << "Enter Author : ";cin >> book.author;
	cout << "Enter Genre : ";cin >> book.genre;
	cout << "Enter Publisher : ";cin >> book.vudavnutstvo;
	cout << "Enter Year : ";cin >> book.year;
	cout << "Enter Price : ";cin >> book.price;
	return book;
}
void PrintAllBooks(Book* books, int size)
{
    for (int i = 0; i < size; i++)
    {
        ShowOneBook(books[i]);
        cout << endl;
    }
}
void SearchByName(Book* books, int size, char name[])
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(books[i].name, name) == 0) {
            ShowOneBook(books[i]);
        }
    }

}
void ChangeBook(Book* books, int size, int id)
{
    for (int i = 0; i < size; i++)
    {
        if (books[i].id == id) {
            ShowOneBook(books[i]);
            cout << "Enter new price : ";
            cin >> books[i].price;
        }
    }
}
void SearchByName(Book* books, int size, char name[])
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(books[i].name, name) == 0) {
            ShowOneBook(books[i]);
        }
    }

}
void SearchByAuthor(Book* books, int size, char director[])
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(books[i].author, director) == 0) {
            ShowOneBook(books[i]);
        }
    }
}
void SearchByGenre(Book* books, int size, char genre[])
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(books[i].genre, genre) == 0) {
            ShowOneBook(books[i]);
        }
    }
}
void SearchBypublisher(Book* books, int size, char vudavnutstsvo[])
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(books[i].vudavnutstvo, vudavnutstsvo) == 0) {
            ShowOneBook(books[i]);
        }
    }
}
Book* DeleteBook(Book* books, int size, int id)
{
	Book* newbook = new Book[size-1];
    for (int i = 0; i < size; i++)
    {
		if (books[i].id != id) {
			newbook[i] = books[i];
		}
    }
    delete[]books;
    size--;
    return newbook;
}
Book* AddBook (Book* books,Book newbook, int size)
{
	Book* newbooks = new Book[size+1];
    for (int i = 0; i < size; i++)
    {
		newbooks[i] = books[i];
    }
	newbooks[size + 1] = newbook;
    delete[]books;
    size++;
    return newbooks;
}
int main()
{
    const int size = 6;
    Book books[size] = {

    };

    int choice, id;
    char name[50];
    do
    {
        system("cls");
        cout << "------------- Menu ------------------" << endl;
        cout << "\tShow all Books                 [1]" << endl;
        cout << "\tSearch by name                 [2]" << endl;
        cout << "\tSearch by Author               [3]" << endl;
        cout << "\tSearch by genre                [4]" << endl;
        cout << "\tSearch by publisher            [5]" << endl;
        cout << "\tChange book                    [6]" << endl;
        cout << "\tDelete book                    [7]" << endl;
        cout << "\tAdd book                       [8]" << endl;
        cout << "\tExit                           [0]" << endl;
        cin >> choice;
        cin.ignore();
        switch (choice)
        {
        case 0:
            cout << "tu sho vopshe abaldyel" << endl;
            break;
        case 1:
            PrintAllBooks(books, size);
            break;
        case 2:
            cout << "Enter name book : ";
            cin.getline(name, 50);
            SearchByName(books, size, name);
            break;
        case 3:
            cout << "Enter director of book : ";
            cin.getline(name, 50);
            SearchByAuthor(books, size, name);
            break;
        case 4:
            cout << "Enter genre book : ";
            cin.getline(name, 50);
            SearchByGenre(books, size, name);
            break;
        case 5:
            cout << "Enter genre book : ";
            cin.getline(name, 50);
            SearchBypublisher(books, size, name);
            break;
        case 6:
            cout << "Enter id book : ";
            cin >> id;
            ChangeBook(books, size, id);
            break;
        case 7:
            cout << "Enter id book : ";
            cin >> id;
            DeleteBook(books, size, id);
            break;
        case 8:
			Book newbook = cinBook(newbook);
            AddBook(books,newbook, size);
            break;
        default:
            cout << "Error choice!" << endl;
            break;
        }
        cout << "Press any key......";
        _getch();
    } while (choice != 0);

}
