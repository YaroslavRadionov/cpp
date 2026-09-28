#include <iostream>
#include <iomanip>
using namespace std;

void InitArray(int** arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 90 + 10;
		}
	}
}
void ShowArray(int** arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << setw(4) << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << "-----------------------------------" << endl << endl;
}
void FillRow(int* arr, int cols)
{
	for (int i = 0; i < cols; i++)
	{
		arr[i] = rand() % 10;
	}
}
int** AddNewRow(int** arr, int& rows, int cols)
{
	int** temp = new int* [rows + 1];
	temp[0] = new int[cols];
	FillRow(temp[0], cols);
	for (int i = 0; i < rows; i++)
	{
		temp[i+1] = arr[i];
	}
	delete[]arr;
	rows++;
	return temp;
}
int** DeleteRow(int** arr, int& rows, int& cols)
{
	int** temp = new int* [rows - 1];
	for (int i = 0; i < rows - 1; i++)
	{
		temp[i] = arr[i+1];
	}
	delete[]arr[0];
	delete[]arr;
	rows--;
	return temp;
}
int** DeleteRowByPosition(int** arr, int& rows, int cols, int pos)
{
	int** temp = new int* [rows - 1];
	for (int i = 0; i < pos; i++)
	{
		temp[i] = arr[i];
	}
	for (int i = pos; i < rows; i++)
	{
		temp[i] = arr[i+1];
	}
	delete[]arr[pos];
	delete[]arr;
	rows--;
	return temp;
}
int** AddColumn(int** arr, int& rows, int& cols)
{
	int** temp = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		temp[i] = new int[cols + 1];
	}
	for (int i = 0; i < rows; i++)
	{
		temp[i][0] = rand() % 10;
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			temp[i][j+1] = arr[i][j];
		}
	}

	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[]arr;
	cols++;
	return temp;

}
int** AddColumnByPosition(int** arr, int& rows, int& cols, int pos)
{
	int** temp = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		temp[i] = new int[cols + 1];
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < pos; j++)
		{
			temp[i][j] = arr[i][j];
		}
	}
	for (int i = 0; i < rows; i++)
	{
		temp[i][pos] = rand() % 10;
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = pos; j < cols; j++)
		{
			temp[i][j+1] = arr[i][j];
		}
	}

	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[]arr;
	cols++;
	return temp;

}
int** DeleteColumnByPosition(int** arr, int& rows, int& cols, int pos)
{
	int** temp = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		temp[i] = new int[cols - 1];
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < pos; j++)
		{
			temp[i][j] = arr[i][j];
		}
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = pos; j < cols; j++)
		{
			temp[i][j -1] = arr[i][j];
		}
	}

	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[]arr;
	cols--;
	return temp;

}
int main()
{
	//1
	//int rows = 4;
	//int cols = 5;
	//int** arr = new int* [rows];
	//for (int i = 0; i < rows; i++){arr[i] = new int[cols];}
	//InitArray(arr, rows, cols);
	//ShowArray(arr, rows, cols);
	//arr = AddNewRow(arr, rows, cols);
	//ShowArray(arr, rows, cols);

	//2
	//int rows = 4;
	//int cols = 5;
	//int** arr = new int* [rows];
	//for (int i = 0; i < rows; i++) { arr[i] = new int[cols]; }
	//InitArray(arr, rows, cols);
	//ShowArray(arr, rows, cols);
	//arr = DeleteRow(arr, rows, cols);
	//ShowArray(arr, rows, cols);

	//3
	//int rows = 4;
	//int cols = 5;
	//int pos = 2;
	//int** arr = new int* [rows];
	//for (int i = 0; i < rows; i++) { arr[i] = new int[cols]; }
	//InitArray(arr, rows, cols);
	//ShowArray(arr, rows, cols);
	//cout << "Enter position";cin >> pos;
	//arr = DeleteRowByPosition(arr, rows, cols, pos);
	//ShowArray(arr, rows, cols);

	//4
	//int rows = 4;
	//int cols = 5;
	//int** arr = new int* [rows];
	//for (int i = 0; i < rows; i++) { arr[i] = new int[cols]; }
	//InitArray(arr, rows, cols);
	//ShowArray(arr, rows, cols);
	//arr = AddColumn(arr, rows, cols);
	//ShowArray(arr, rows, cols);

	//5
	//int rows = 4;
	//int cols = 5;
	//int pos = 2;
	//int** arr = new int* [rows];
	//for (int i = 0; i < rows; i++) { arr[i] = new int[cols]; }
	//InitArray(arr, rows, cols);
	//ShowArray(arr, rows, cols);
	//cout << "Enter position";cin >> pos;
	//arr = AddColumnByPosition(arr, rows, cols, pos);
	//ShowArray(arr, rows, cols);

	//6
	//int rows = 4;
	//int cols = 5;
	//int pos = 2;
	//int** arr = new int* [rows];
	//for (int i = 0; i < rows; i++) { arr[i] = new int[cols]; }
	//InitArray(arr, rows, cols);
	//ShowArray(arr, rows, cols);
	//cout << "Enter position";cin >> pos;
	//arr = DeleteColumnByPosition(arr, rows, cols, pos);
	//ShowArray(arr, rows, cols);
}

