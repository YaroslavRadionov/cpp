
#include <conio.h>
#include <iostream>
using namespace std;
int* CreateArrayint(int size)
{
	int* arr = new int[size];
	return arr;
}
float* CreateArrayfloat(int size)
{
	float* arr = new float[size];
	return arr;
}
long* CreateArraylong(int size)
{
	long* arr = new long[size];
	return arr;
}
void InitArrayint(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}
void InitArrayfloat(float* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}
void InitArraylong(long* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}
void ShowArrayint(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	
}
void ShowArrayfloat(float* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	
}
void ShowArraylong(long* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	
}
void mnoshutuint(int* arr, int size)
{	
	int mnosh = 1;
	for (int i = 0; i < size; i++)
	{
		mnosh *= arr[i];
	}
	cout << endl << mnosh << endl;
}
void mnoshutufloat(float* arr, int size)
{	
	float mnosh = 1.0;
	for (int i = 0; i < size; i++)
	{
		mnosh *= arr[i];
	}
	cout<< endl << mnosh << endl;
}
void mnoshutulong(long* arr, int size)
{	
	long mnosh = 1;
	for (int i = 0; i < size; i++)
	{
		mnosh *= arr[i];
	}
	cout << endl << mnosh << endl;
}
int* AddNewElement(int* arr, int* size, int number, int position)
{
	int* temp = new int[*size + 1];
	for (int i = 0; i < *size + 1; i++)
		for (int i = 0; i < position; i++)
		{
			temp[i] = arr[i];
		}
	temp[position] = number;
	for (int i = position; i < *size; i++)
	{
		temp[i + 1] = arr[i];
	}
	temp[position] = number;
	delete[]arr;
	arr = temp;
	(*size)++;
	return arr;
}
int* DeleteElement(int* arr, int* size, int position)
{
	
	int* temp = new int[*size];
	for (int i = 0; i < *size; i++)
	{
		if (i = !position) {
			temp[i] = arr[i];
		}
	}
	delete[]arr;
	arr = temp;
	(*size)--;
	return arr;
}
int* DeleteEndElement(int* arr, int* size)
{
	int* temp = new int[*size - 1];
	for (int i = 0; i < *size-1; i++)
	{
		temp[i] = arr[i];
	}
	delete[]arr;
	arr = temp;
	(*size)--;
	return arr;
}
void show(int* arr, int size)
{
	int lenght = 2;
	for (int i = 0; i < size; i++) {
		if (arr[i] > 9) { lenght += 3; }
		else { lenght += 2; }
	}
	for (int i = 0; i < lenght; i++) { cout <<"="; }
	cout << "\n|";
	for (int i = 0; i < size; i++) { cout << arr[i] << " "; }
	cout << "|\n";
	for (int i = 0; i < lenght; i++) { cout << "="; }
	cout << endl;
}
int main()
{
	//1
	//const int size = 10;
	//int* arrint =CreateArrayint(size);
	//InitArrayint(arrint, size);
	//ShowArrayint(arrint, size);
	//mnoshutuint(arrint, size);
	//float* arrfloat =CreateArrayfloat(size);
	//InitArrayfloat(arrfloat, size);
	//ShowArrayfloat(arrfloat, size);
	//mnoshutufloat(arrfloat, size);
	//long* arrlong =CreateArraylong(size);
	//InitArraylong(arrlong, size);
	//ShowArraylong(arrlong, size);
	//mnoshutulong(arrlong, size);


	//2
	int size;
	int a;
	int position;
	cout << "Enter a size of array: ";	cin >> size;
	int* arrint = CreateArrayint(size);
	InitArrayint(arrint, size);
	show(arrint, size);
	int choice;
	while (true) {
		cout << "==============================\n";
		cout << "|     1. Add new element     |\n";
		cout << "|     2. Delete end element  |\n";
		cout << "|     3. Delete element      |\n";
		cout << "|         4. Exit            |\n";
		cout << "==============================\n";
		cout << "Enter choice:";choice = _getch();cout << endl;
		if (choice == '1')
		{
			cout << "\nEnter number : "; cin >> a;
			cout << "\nEnter position: ";position = _getch();
			if (position < 0 || position > size-1) {cout << "Error 404" << endl;}
			arrint = AddNewElement(arrint, &size, a, position);
			show(arrint, size);
		}
		else if (choice == '2')
		{
			arrint = DeleteEndElement(arrint, &size);
			show(arrint, size);
		}
		else if (choice == '3')
		{
			arrint = DeleteElement(arrint, &size, position);
			cout << "\nEnter position: ";position = _getch();
			if (position < 0 || position > size - 1) {cout << "Error 404" << endl;}
			arrint = DeleteElement(arrint, &size, position);
			show(arrint, size);
		}
		else if (choice == '4')
		{
			break;
		}
		else if (choice > 4 or choice < 1)
		{
			cout << "Error 404" << endl;
		}
	}

}

