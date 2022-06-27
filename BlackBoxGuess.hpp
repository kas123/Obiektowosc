#pragma once


class BlackBoxGuess
{
	int range;
	int number;

public:
	BlackBoxGuess(int range);
	int is(int guess);
	int getNumber();
	bool isExact(int guess);
	bool isBigger(int guess);

};