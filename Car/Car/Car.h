#include <iostream>
using namespace std;

class Car
{

public:
	string make;
	string model;
	int year;
	int engineVolume;
	char color[10];
public:
	void setMake(string);
	void setModel(string);
	void setYear(int);
	void setEngineVolume(int);
	void setColor(char*);
	Car(string make, string model, int year, int engineVolume, char* color);
	Car();
	~Car();
	friend std::ostream& operator<< (std::ostream& stream, const Car& c);
	const Car compareByYear(const Car & car2)const;	
	const Car Car::compareByEngineVolume(const Car & car2)const;
};
