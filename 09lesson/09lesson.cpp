#include <iostream>
using namespace std;

void initarray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}
void showarray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void bubblesort1(int arr[], int size)
{
	int temp;
	for (int i = 0; i < size; i++)
	{
		for (int j = size - 1; j > i; j--)
		{
			if (arr[j - 1] > arr[j]) {
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
void bubblesort0(int arr[], int size)
{
	int temp;
	for (int i = 0; i < size; i++)
	{
		for (int j = size - 1; j > i; j--)
		{
			if (arr[j - 1] < arr[j]) {
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
void initarray1(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 40 - 20;
	}
}
void bubblesort2(int arr[], int size)
{
	int temp;
	int first =-1;
	int last = -1;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0)
		{
			first = i;
			break;
		}
	}
	for (int i = size-1; i >= 0; i--)
	{
		if (arr[i] < 0)
		{
			last = i;
			break;
		}
	}
	cout << first <<" " << last << endl;
	for (int i = first; i <= last; i++)
	{
		for (int j = last; j > i; j--)
		{
			if (arr[j - 1] > arr[j]) {
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
int main() 
{

	//1
	//const int size = 10;
	//int arr[size];
	//int a = 0;
	//initarray(arr, size);
	//showarray(arr, size);
	//cin >> a;
	//if (a == 0)
	//{
	//	bubblesort0(arr, size);
	//	showarray(arr, size);
	//}
	//else
	//{
	//	bubblesort1(arr, size);
	//	showarray(arr, size);
	//}


	//2
	//const int size = 10;
	//int arr[size];
	//initarray1(arr, size);
	//showarray(arr, size);
	//bubblesort2(arr, size);
	//showarray(arr, size);
}

