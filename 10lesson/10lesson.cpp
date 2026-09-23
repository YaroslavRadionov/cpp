#include <iostream>
using namespace std;

void min(int* pa, int* pb, int* pc)
{
	if (*(pa) < *(pb) && *(pa) < *(pc))
	{
		cout << *(pa) << endl;
	}
	else if (*(pb) < *(pa) && *(pb) < *(pc))
	{
		cout << *(pb) << endl;
	}
	else
	{
		cout << *(pc) << endl;
	}
}
void initarray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
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
	void showarray(int arr[], int size)
	{
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	void plusarray(int arr[], int size)
	{
		int all = 0;
		for (int i = 0; i < size; i++)
		{
			all += arr[i];
		}
		cout << all << endl;
	}
	void smallestbiggest(int arr[], int size)
	{
		int biggest = arr[0];
		int smallest = arr[0];
		int smallestpos = 0;
		int biggestpos = 0;
		for (int i = 0; i < size; i++)
		{
			if (arr[i] > biggest)
			{
				biggest = arr[i];
				biggestpos = i;
			}
			else if (arr[i] < smallest)
			{
				smallest = arr[i];
				smallestpos = i;
			}
		}
		arr[smallestpos] = biggest;
		arr[biggestpos] = smallest;
	}
	void parneneparne(int arr[], int size)
	{
		int parne = arr[0];
		int neparne = arr[0];
		int parnepos = 0;
		int neparnepos = 1;
		for (int i = 0; i < size; i++)
		{
			if (i % 2 == 0)
			{
				parne = arr[i];
				parnepos = i;
			}
			else
			{
				neparne = arr[i];
				neparnepos = i;
			}
			arr[neparnepos] = parne;
			arr[parnepos] = neparne;
		}

	}
int main()
{

	//1
	//int a = 0;
	//int b = 0;
	//int c = 0;
	//cout << "Enter a number: "; cin >> a;
	//cout << "Enter a second number: "; cin >> b;
	//cout << "Enter a third number: "; cin >> c;
	//int* pa = &a;
	//int* pb = &b;
	//int* pc = &c;
	//cout << *(pa) * *(pb) * *(pc) << endl;
	//cout << (*(pa) + *(pb) + *(pc))/3 << endl;
	//min(pa, pb, pc);


	//2
	//const int size = 10;
	//int arr[size];
	//initarray(arr, size);
	//bubblesort1(arr, size);
	//showarray(arr, size);
	//bubblesort0(arr, size);
	//showarray(arr, size);
	//plusarray(arr, size);


	//3
	//const int size = 10;
	//int arr[size];
	//initarray(arr, size);
	//showarray(arr, size);
	//smallestbiggest(arr, size);
	//showarray(arr, size);



	//4
	//const int size = 10;
	//int arr[size];
	//initarray(arr, size);
	//showarray(arr, size);
	//parneneparne(arr, size);
	//showarray(arr, size);

}

