#include <iostream>
using namespace std;

int first1(int a, int b){return (a > b) ? a : b;}

float first1(float a, float b){return (a > b) ? a : b;}

double first1(double a, double b){return (a > b) ? a : b;}

int first2(int a, int b, int c){return (a > b > c) ? a : (b > a > c) ? b : c;}

float first2(float a, float b, float c){return (a > b > c) ? a : (b > a > c) ? b : c;}

double first2(double a, double b, double c){return (a > b > c) ? a : (b > a > c) ? b : c;}

int first3(int a, int b) { return (a > b ) ? b : a ; }

int first3(float a, float b) { return (a > b ) ? b : a ; }

int first3(double a, double b) { return (a > b ) ? b : a ; }

int first4(int a, int b, int c){return (a > b > c) ? c : (b > c > a) ? a : b;}

float first4(float a, float b, float c){return (a > b > c) ? c : (b > c > a) ? a : b;}

double first4(double a, double b, double c) { return (a > b > c) ? c : (b > c > a) ? a : b; }

template<typename T_arr>
T_arr second(T_arr arr[], int size)
{
	T_arr a = 0;
	for (int i = 0; i < size;i++)
	{
		a += arr[i];
	}
	return a /= size;
}
template<typename T_arr>
T_arr third1(T_arr arr[], int size)
{
	T_arr a = arr[0];
	for (int i = 0; i < size;i++)
	{
		if (arr[i] > a)
		{
			a = arr[i];
		}
	}
	return a;
}
template<typename T_arr>
T_arr third2(T_arr arr[][7], int size)
{
	T_arr a = arr[0][0];
	for (int i = 0; i < 7;i++)
	{
		for (int j = 0; j < size;j++)
		{
			if (arr[i][j] > a)
			{
				a = arr[i][j];
			}
		}
	}
	return a;
}
int main()
{
	//int a = 10;
	//int b = 100;
	//cout << "max =" << first1(a,b) << endl;

	//float a = 10;
	//float b = 100;
	//cout << "max =" << first1(a,b) << endl;

	//double a = 10;
	//double b = 100;
	//cout << "max =" << first1(a,b) << endl;

	//int a = 10;
	//int b = 100;
	//int c = 50;
	//cout << "min =" << first2(a,b,c) << endl;

	//float a = 10;
	//float b = 100;
	//float c = 50;
	//cout << "min =" << first2(a,b,c) << endl;

	//double a = 10;
	//double b = 100;
	//double c = 50;
	//cout << "min =" << first2(a,b,c) << endl;

	//int a = 10;
	//int b = 100;
	//cout << "max =" << first3(a, b) << endl;

	//float a = 10;
	//float b = 100;
	//cout << "max =" << first3(a, b) << endl;

	//double a = 10;
	//double b = 100;
	//cout << "max =" << first3(a, b) << endl;

	//int a = 10;
	//int b = 100;
	//int c = 50;
	//cout << "min =" << first4(a, b, c) << endl;

	//float a = 10;
	//float b = 100;
	//float c = 50;
	//cout << "min =" << first4(a, b, c) << endl;

	//double a = 10;
	//double b = 100;
	//double c = 50;
	//cout << "min =" << first4(a, b, c) << endl;

	//const int size=10;
	//int arr[size] = {10,12,45,3,7,90,56,3,8,98};
	//int arr1[size][7] = {10,12,45,3,7,90,56,3,8,98};
	//cout << second(arr, size) << endl << third1(arr, size)<<endl<< third2(arr1, size)<< endl;
	//cout << second(arr, size) << endl << third1(arr, size)<<endl<< third2(arr1, size)<< endl;
	//cout << second(arr, size) << endl << third1(arr, size)<<endl<< third2(arr1, size)<< endl;



}








