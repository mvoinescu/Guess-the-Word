#pragma once
#include <string>

class FGuessTheWord
{
public:
	void Reset(); // TODO make a more rich return value.
	int	GetMaxTries();
	int GetCurrentTry();
	bool IsGameWon();
	bool CheckGuessValidity(std::string); // TODO make a more rich return value.




	// Ignore this for now
private:
	int MyCurrentTry;
	int MyMaxTries;
	bool IsISogram(std::string);

};