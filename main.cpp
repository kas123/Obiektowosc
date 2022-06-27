#include <iostream>
#include "BlackBoxGuess.hpp"

int main()
{
	int range;
	std::cout << "Podaj zakres koncowy losowania: " << std::endl;
	std::cin >> range;
	BlackBoxGuess game(range);
	std::cout << "Poprawna liczba to: " << game.getNumber();
	std::cout << "Zacznij zgadywac: " << std::endl;
	int number;
	do {
		std::cin >> number;
		if (number <= range)
		{
			std::cout << game.is(number) << std::endl;
		}
		else
		{
			std::cout << "Liczba spoza zakresu" << std::endl;
		}
	} while (game.is(number) != 0);

	std::cout << "Poprawna liczba to: " << game.getNumber(); //upewniam sie tylko czy dziala dobrze
	
}