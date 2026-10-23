#include <iostream>
#include <Windows.h>
using namespace std;
class Time {
	int hour;
	int minute;
	int second;
public:
	Time()
	{
		hour = minute = second = 0;
	}
	Time(int h, int m, int s) {
		this->hour = h;
		this->minute = m;
		this->second = s;
	}
	void seconds(int seconds)
	{
		this->second = seconds % 60;
		this->minute = (seconds / 60) % 60;
		this->minute = (seconds / 3600);
	}
	void show()
	{
		if (hour < 10)
		{
			cout << "0";
		}
		cout << hour << ":";
		if (minute < 10)
		{
			cout << "0";
		}
		cout << minute << ":";
		if (second < 10)
		{
			cout << "0";
		}
		cout << second << endl;
	}
	Time operator()(int h, int m, int s)
	{
		this->hour = h;
		this->minute = m;
		this->second = s;
		return *this;
	}
};
int main() 
{
	Time time(0,0,0);
	time.seconds(10000);
	time.show();
	int seconds = 0;
	int minutes = 0;
	int hours = 0;
	while (true)
	{
		time.show();
		Sleep(1000);
		seconds++;
		
		if (seconds == 60)
		{
			minutes++;
			seconds = 0;
			if (minutes == 60)
			{
				hours++;
				minutes = 0;
			}
		}
		time(hours, minutes, seconds);
	}

}



