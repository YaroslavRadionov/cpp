#include <iostream>
using namespace std;
struct washingmashine
{
	char company[20];
	char color[20];
	float widht;
	float lenght;
	float height;
	float power;
	float speedofpress;
	float temperature;
};
struct iron
{
	char company[20];
	char model[20];
	char color[20];
	float mintemp;
	float maxtemp;
	bool istherefunctionsteam;
	float power;
};
struct boiler
{
	char company[20];
	char color[20];
	float power;
	float capacity;
	float temperature;
};
void showwashingmachine(washingmashine washingmachine)
{
	cout << "Company: " << washingmachine.company << endl;
	cout << "Color: " << washingmachine.color << endl;
	cout << "Widht: " << washingmachine.widht << endl;
	cout << "Lenght: " << washingmachine.lenght << endl;
	cout << "Height: " << washingmachine.height << endl;
	cout << "Power: " << washingmachine.power << endl;
	cout << "Speed of press: " << washingmachine.speedofpress << endl;
	cout << "Temperature: " << washingmachine.temperature << endl;
}
void showiron(iron washingmachine)
{
	cout << "Company: " << washingmachine.company << endl;
	cout << "Model: " << washingmachine.model << endl;
	cout << "Color: " << washingmachine.color << endl;
	cout << "Min temperature: " << washingmachine.mintemp << endl;
	cout << "Max temperature: " << washingmachine.maxtemp << endl;
	if (washingmachine.istherefunctionsteam == true)
	{
		cout << "Is there function steam: Yes" << endl;
	}
	else
	{
		cout << "Is there function steam: No" << endl;
	}

	cout << "Power: " << washingmachine.power << endl;
}
void showboiler(boiler washingmachine)
{
	cout << "Company: " << washingmachine.company << endl;
	cout << "Color: " << washingmachine.color << endl;
	cout << "Power: " << washingmachine.power << endl;
	cout << "Capacity: " << washingmachine.capacity << endl;
	cout << "Temperature: " << washingmachine.temperature << endl;
}
int main()
{
	//1
	washingmashine Washingmachine{"Samsung","White",60,60,85,2500,1000,60};
	showwashingmachine(Washingmachine);
	//2
	iron Iron{ "Philips","i dont know","White",100,230,true,1900};
	showiron(Iron);
	//3
	boiler Boiler{ "Philips","White",2000,1.5,100 };
	showboiler(Boiler);
}
