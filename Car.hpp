#pragma once
#include<string>

class Car
{
	std::string carBrand;
	int ordNumber = 0;
public:
	static int count;
	Car(std::string carBrand);
	int getCount();

};