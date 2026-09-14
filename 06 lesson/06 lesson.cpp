#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	srand(time(NULL));
	//const int a = 4;
	//const int b = 3;
	//int c = 0;
	//int arr[b][a] = {0};

	//for (int y = 0; y < b; y++) {
	//	for (int x = 0; x < a; x++) {
	//		arr[y][x] = (rand() %  50) - 25;
	//		cout << arr[y][x] << " ";
	//		if (arr[y][x] < 0) {
	//			c++;
	//		}
	//	}
	//	cout << endl;
	//}
	//cout << "Number of negative elements: " << c << endl;



	//const int a = 3;
	//const int b = 3;
	//int c = 0;
	//int arr[b][a] = { 0 };

	//for (int y = 0; y < b; y++) {
	//	for (int x = 0; x < a; x++) {
	//		arr[y][x] = (rand() % 50) - 25;
	//		cout << arr[y][x] << " ";
	//		if (arr[y][x] == 0) {
	//			c++;
	//		}
	//	}
	//	cout << endl;
	//}
	//cout << "Number of zero elements: " << c << endl;



	//const int a = 3;
	//const int b = 7;
	//int c = 0;
	//int arr[b][a] = { 0 };

	//for (int y = 0; y < b; y++) {
	//	for (int x = 0; x < a; x++) {
	//		arr[y][x] = (rand() % 50) - 25;
	//		cout << arr[y][x] << " ";
	//		if (arr[y][x] < 12 && arr[y][x] > -12) {
	//			c++;
	//		}
	//	}
	//	cout << endl;
	//}
	//cout << "Number of elements in range: " << c << endl;



	//const int a = 5;
	//const int b = 4;
	//int c = 0;
	//int arr[b][a] = { 0 };

	//for (int y = 0; y < b; y++) {
	//	for (int x = 0; x < a; x++) {
	//		arr[y][x] = (rand() % 50) - 25;
	//		cout << arr[y][x] << " ";
	//		if (arr[y][x] > 0) {
	//			c++;
	//		}
	//	}
	//	cout << endl;
	//}
	//cout << "Number of positive elements: " << c << endl;



	//const int a = 4;
	//const int b = 5;
	//int c = 1;
	//int arr[b][a] = { 0 };

	//for (int y = 0; y < b; y++) {
	//	for (int x = 0; x < a; x++) {
	//		arr[y][x] = (rand() % 50) - 25;
	//		cout << arr[y][x] << " ";
	//		if (arr[y][x] > 0) {
	//			c = c * arr[y][x];
	//		}
	//	}
	//	cout << endl;
	//}
	//cout << "Product of positive elements: " << c << endl;



	//const int a = 4;
	//const int b = 5;
	//int c = 1;
	//int arr[b][a] = { 0 };

	//for (int y = 0; y < b; y++) {
	//	for (int x = 0; x < a; x++) {
	//		arr[y][x] = (rand() % 50) - 25;
	//		cout << arr[y][x] << " ";
	//		if (arr[y][x] < 0) {
	//			c = c * arr[y][x];
	//		}
	//	}
	//	cout << endl;
	//}
	//cout << "Product of negative elements: " << c << endl;



//const int a = 4;
//const int b = 4;
//int c = 1;
//int arr[b][a] = { 0 };
//
//for (int y = 0; y < b; y++) {
//	for (int x = 0; x < a; x++) {
//		arr[y][x] = (rand() % 50) - 25;
//		cout << arr[y][x] << " ";
//		if (arr[y][x]%6 == 1) {
//			c++;
//		}
//	}
//	cout << endl;
//}
//cout << "Number of elements with remainder 1 when divided by 6: " << c << endl;



//const int a = 6;
//const int b = 5;
//int c = 1;
//int arr[b][a] = { 0 };
//
//for (int y = 0; y < b; y++) {
//	for (int x = 0; x < a; x++) {
//		arr[y][x] = (rand() % 50) - 25;
//		cout << arr[y][x] << " ";
//		if (arr[y][x] < c) {
//			c = arr[y][x];
//
//		}
//	}
//	cout << endl;
//}
//cout << "Minimum element: " << c << endl;



//const int a = 6;
//const int b = 5;
//int c = 1;
//int arr[b][a] = { 0 };
//
//for (int y = 0; y < b; y++) {
//	for (int x = 0; x < a; x++) {
//		arr[y][x] = (rand() % 50) - 25;
//		cout << arr[y][x] << " ";
//		if (arr[y][x] > c) {
//			c = arr[y][x];
//
//		}
//	}
//	cout << endl;
//}
//cout << "Maximum element: " << c << endl;



//const int a = 4;
//const int b = 5;
//int c = 0;
//int arr[b][a] = { 0 };
//
//for (int y = 0; y < b; y++) {
//	for (int x = 0; x < a; x++) {
//		arr[y][x] = (rand() % 50) - 25;
//		cout << arr[y][x] << " ";
//		if (arr[y][x] < 0) {
//			c =c + arr[y][x];
//
//		}
//	}
//	cout << endl;
//}
//cout << "Sum of negative elements: " << c << endl;






//const int a = 10;
//const int b = 10;
//int c = 0;
//int arr[a][b] = { 0 };
//for (int i = 0; i < a; i++)
//{
//	for (int j = 0; j < b; j++)
//	{
//		arr[i][j] = (rand() % 90) + 10;
//		if (i <= j)
//		{
//			cout << arr[i][j] << " ";
//			if (arr[i][j] > c) { c = arr[i][j]; }
//		}
//
//		else {
//			cout << "   ";
//		}
//	}
//	cout << endl;
//}
//cout << endl << c << endl;




//const int a = 10;
//const int b = 10;
//int c = 0;
//int arr[a][b] = { 0 };
//for (int i = 0; i < a; i++)
//{
//	for (int j = 0; j < b; j++)
//	{
//		arr[i][j] = (rand() % 90) + 10;
//		if (i >= j)
//		{
//			cout << arr[i][j] << " ";
//			if (arr[i][j] > c) { c = arr[i][j]; }
//		}
//
//		else {
//			cout << "   ";
//		}
//	}
//	cout << endl;
//}
//cout<< endl << c << endl;




//const int a = 10;
//const int b = 10;
//int c = 0;
//int arr[a][b] = { 0 };
//for (int i = 0; i < a; i++)
//{
//	for (int j = 0; j < b; j++)
//	{
//		arr[i][j] = (rand() % 90) + 10;
//		if (i <= j && i + j <= a - 1)
//		{
//			cout << arr[i][j] << " ";
//			if (arr[i][j] > c) { c = arr[i][j]; }
//		}
//
//		else {
//			cout << "   ";
//		}
//	}
//	cout << endl;
//}
//cout << endl << c << endl;



//const int a = 10;
//const int b = 10;
//int c = 0;
//int arr[a][b] = { 0 };
//for (int i = 0; i < a; i++)
//{
//	for (int j = 0; j < b; j++)
//	{
//		arr[i][j] = (rand() % 90) + 10;
//		if (i >= j && i + j >= a - 1)
//		{
//			cout << arr[i][j] << " ";
//			if (arr[i][j] > c) { c = arr[i][j]; }
//		}
//
//		else {
//			cout << "   ";
//		}
//	}
//	cout << endl;
//}
//cout << endl << c << endl;




//const int a = 10;
//const int b = 10;
//int c = 0;
//int arr[a][b] = { 0 };
//for (int i = 0; i < a; i++)
//{
//	for (int j = 0; j < b; j++)
//	{
//		arr[i][j] = (rand() % 90) + 10;
//		if (i >= j && i + j >= a - 1)
//		{
//			cout << arr[i][j] << " ";
//			if (arr[i][j] > c) { c = arr[i][j]; }
//		}
//		else if (i <= j && i + j <= a - 1)
//		{
//			cout << arr[i][j] << " ";
//			if (arr[i][j] > c) { c = arr[i][j]; }
//		}
//		else {
//			cout << "   ";
//		}
//	}
//	cout << endl;
//}
//cout << endl << c << endl;






//const int a = 10;
//const int b = 10;
//int c = 0;
//int arr[a][b] = { 0 };
//for (int i = 0; i < a; i++)
//{
//	for (int j = 0; j < b; j++)
//	{
//		arr[i][j] = (rand() % 90) + 10;
//		if (i <= j && i + j >= a - 1)
//		{
//			cout << arr[i][j] << " ";
//			if (arr[i][j] > c) { c = arr[i][j]; }
//		}
//		else if (i >= j && i + j <= a - 1)
//		{
//			cout << arr[i][j] << " ";
//			if (arr[i][j] > c) { c = arr[i][j]; }
//		}
//		else {
//			cout << "   ";
//		}
//	}
//	cout << endl;
//}
//cout << endl << c << endl;





//const int a = 10;
//const int b = 10;
//int c = 0;
//int arr[a][b] = { 0 };
//for (int i = 0; i < a; i++)
//{
//	for (int j = 0; j < b; j++)
//	{
//		arr[i][j] = (rand() % 90) + 10;
//		if (i <= j && i + j >= a - 1)
//		{
//			cout << arr[i][j] << " ";
//			if (arr[i][j] > c) { c = arr[i][j]; }
//		}
//
//		else {
//			cout << "   ";
//		}
//	}
//	cout << endl;
//}
//cout << endl << c << endl;


//const int a = 10;
//const int b = 10;
//int c = 0;
//int arr[a][b] = { 0 };
//for (int i = 0; i < a; i++)
//{
//	for (int j = 0; j < b; j++)
//	{
//		arr[i][j] = (rand() % 90) + 10;
//		if (i >= j && i + j <= a - 1)
//		{
//			cout << arr[i][j] << " ";
//			if (arr[i][j] > c) { c = arr[i][j]; }
//		}
//
//		else {
//			cout << "   ";
//		}
//	}
//	cout << endl;
//}
//cout << endl << c << endl;



const int a = 10;
const int b = 10;
int c = 0;
int arr[a][b] = { 0 };
for (int i = 0; i < a; i++)
{
	for (int j = 0; j < b; j++)
	{
		arr[i][j] = (rand() % 90) + 10;
		if (i + j == a - 1)
		{
			cout << arr[i][j] << " ";
			if (arr[i][j] > c) { c = arr[i][j]; }
		}

		else {
			cout << "   ";
		}
	}
	cout << endl;
}
cout << endl << c << endl;
}


