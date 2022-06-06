//zadanie 6.3: zaimplementuj prosta klase Car, ktora posiada jedynie marke tego pojazdu oraz numer identyfikacyjny okreslajacy ktorym z kolei pojazdem utworzonym jest dany obiekt.
//Wykorzystaj pole statyczne z licznikiem samochodow do tego celu

#include<iostream>
#include "Car.hpp"

int main()
{
	Car car1("LandRover");
	Car car2("Mercedes");
	Car car3("Tesla");
	Car car4("BMW");


	std::cout << "Numer porzadkowy auta to: " << car1.getCount() << std::endl;
	std::cout << "Numer porzadkowy auta to: " << car2.getCount() << std::endl;
	std::cout << "Numer porzadkowy auta to: " << car3.getCount() << std::endl;
	std::cout << "Numer porzadkowy auta to: " << car4.getCount() << std::endl;
}