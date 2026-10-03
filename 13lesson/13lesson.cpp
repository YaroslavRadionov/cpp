#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;
void SetColor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void SetPos(int x, int y)
{
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void more(char text[])
{
	int a = 0;
	int o = 0;
	for (int i = 0;i <= strlen(text);i++)
	{
		if (text[i] == 'a'||text[i]=='A')
		{
			a++;
		}
		else if (text[i] == 'o'||text[i] =='O')
		{
			o++;
		}
	}
	if (a > o)
	{
		cout << "a more than o";
	}
	else if (o > a)
	{
		cout << "o more than a";
	}
	else
	{
		cout << "a = o";
	}
}
void second(char text[])
{
	int alpha = 0;
	int number = 0;
	int space = 0;
	for (int i = 0;i <= strlen(text);i++)
	{
		if (isalpha(text[i]))
		{
			alpha++;
		}
		else if (isalnum(text[i]))
		{
			number++;
		}
		else if (isspace(text[i]))
		{
			space++;
		}
	}
	cout << "alpha:" << alpha << endl <<"numbers:"<<number << endl <<"spaces:"<<space<<endl;
}
//int main()
//{
//	//1
//	//char text[]="hello world";
//	//cout << "Enter text:";cin >> text;
//	//more(text);
//
//	//2
//	char text[]="hello world";
//	cout << "Enter text:";cin >> text;
//	second(text);
//}

