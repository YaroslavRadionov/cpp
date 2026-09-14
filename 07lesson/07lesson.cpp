#include <iostream>
using namespace std;
void first(int vusota, int dovshuna, string symbol) 
{
        for (int i = 0;i < vusota; i++)
        {
            for (int j = 0;j < dovshuna; j++)
            {
                cout << symbol << " ";
            }
        cout << endl;
        }
}
void second(int num)
{   
    int factorial = 1;
    for (int i = 0; i < num; i++)
    {
        factorial = factorial * num;
    }
    cin >> factorial;
}

void third(int num)
{
    int num1 = 0;
    for (int i = 1;i < num;i++)
    {
        if (num %i == 0)
        {
            num1++;
        }
    }
    if (num1 < 2)
    {
        cout << "number is simple";
    }
    else
    {
        cout << "number is not simple";
    }
}
void fourths(int arr[], int num)
{
    int b = 0;
    for (int i = 0; i < num;i++)
    {
        if (arr[i] > b)
            b = arr[i];
    }
    cout << b;
}

void fifths(int num)
{
    int const num1 = 2;
    for (int i = 1;i < num1;i++)
    {
        num = num * num;
    }
    cout << num;
}

void sixths(int num)
{
    if (num > 0)
    {
        cout<< "positive";
    }
    else
    {
        cout << "negative";
    }
}


int main() {
    //1
    //int a = 1;
    //int b = 1;
    //int t = 12;
    //string c;
    //cin>>a;
    //cin >> b;
    //cin >> c;
    //first(a, b, c);


    //2
    //int a = 0;
    //cin >> a;
    //second(a);


    //3
    //int a = 0;
    //cin >> a;
    //third(a);


    //4
    //const int a = 5;
    //int arr[a] = { 1,90,110,180,5 };
    //fourths(arr, a);



    //5
    //int a = 0;
    //cin >> a;
    //fifths(a);


    //6
    //int a = 0;
    //cin >> a;
    //sixths(a);
}



