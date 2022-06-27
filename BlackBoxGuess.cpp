#include "BlackBoxGuess.hpp"
#include <random>

BlackBoxGuess::BlackBoxGuess(int range)
{
	this->range = range; 
    this->number = number; 
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(0, range);

    number = distr(gen);
    
}

int BlackBoxGuess::is(int guess)
{
        if (guess == number)
            return 0;
        else if (guess > number)
            return 1;
        else if (guess < number)
            return -1;

    //if (isExact(guess))  -tutaj zdecydowanie czegos brakuje bo nie dziala 
    //    return 0;
    //else if (isBigger(guess))
    //    return -1;
    //else
    //    return 1;

}

int BlackBoxGuess::getNumber()
{
    return number;
}

bool BlackBoxGuess::isExact(int guess)
{
    if (number == guess)
        return true;
}

bool BlackBoxGuess::isBigger(int guess)
{
    
   if (number>guess)
   return true;

}
