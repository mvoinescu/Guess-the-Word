#pragma once
#include <string>

class FGuessTheWord
{
public:
	FGuessTheWord();
	int GetMaxTries() const;
	int GetCurrentTry() const;
	bool IsGameWon() const;

	void Reset(); // TODO make a more rich return value.
	bool CheckGuessValidity(std::string); // TODO make a more rich return value.




	// Ignore this for now
private:
	int MyCurrentTry;
	int MyMaxTries = 5;
	bool IsISogram(std::string);

};