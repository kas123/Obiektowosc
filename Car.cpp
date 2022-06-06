#include "Car.hpp"

int Car::count = 0;

Car::Car(std::string carBrand)
{
	this->carBrand = carBrand;
	count++;
	ordNumber = Car::count;
}
int Car::getCount()
{
	return ordNumber;
}


