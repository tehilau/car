#include "Car.h"
#include <string>
#include <assert.h>

using namespace std;
    //ctor
	Car::Car(string mak, string mod, int yea, int engineVol, char* col)
	{
		make = mak;
		model = mod;
		if (yea >= 0 && yea <= 9999)
		{
			year = yea;
		}
		if (engineVol >= 0)
		{
			engineVolume = engineVol;
		}

		strcpy_s(color, 10, col);
	}
	//def_ctor
	Car::Car()
	{
	}
	//dtor
	Car::~Car()
	{
	}
	//print method to char operation << cout
	std::ostream& operator<<(std::ostream& os, const Car& c)
	{
		os << "make: " << c.make << "\nmodel: " << c.model << "\nyear: " << c.year << "\nengine volume: " << c.engineVolume << "\ncolor: " << c.color << endl;;
		return os;
	}
	void Car::setMake(string m)
	{
		if (m != "")
		{
			make = m;
		}
	}
	void Car::setModel(string m)
	{
		if (m != "")
		{
			model = m;
		}
	}
	void Car::setYear(int y)
	{
		if (y < 1970 && y>2017)
		{
			year = y;
		}
	}
	void Car::setEngineVolume(int engineVol)
	{
		engineVolume = engineVol;
	}
	void Car::setColor(char* color)
	{
		strcpy_s(color, 10, color);
	}
	const Car Car::compareByYear(const Car & car2)const
	{
		return(year >= car2.year) ? *this : car2;
	}
	const Car Car::compareByEngineVolume(const Car & car2)const
	{
		return (engineVolume >= car2.engineVolume) ? *this : car2;
	}
	void main()
	{

		string make = "";
		string model = "";
		int year = 0;
		int engineVolume = 0;
		char color[10] = "black";
		cout << "Please enter first car details  : make ,model ,year,engine volume,color" << endl;
		cin >> make >> model >> year >> engineVolume >> color;
		Car* car1 = new Car( make, model, year, engineVolume, color );
		cout << "Please enter secind car details  : make ,model ,year,engine volume,color" << endl;
		cin >> make >> model >> year >> engineVolume >> color;
		Car* car2= new Car(make, model, year, engineVolume, color);
		cout << "The car with the greater year is" << endl << car1->compareByYear(*car2) << endl;
		cout << "The car with the greater engine volume is " << endl << car1->compareByEngineVolume(*car2) << endl;
	}

