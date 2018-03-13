#include "FGuessTheWord.h"

void FGuessTheWord::Reset()
{
	return;
}

int FGuessTheWord::GetMaxTries()
{
	return MyMaxTries;
}

int FGuessTheWord::GetCurrentTry()
{
	return 1;
}

bool FGuessTheWord::IsGameWon()
{
	return false;
}

bool FGuessTheWord::CheckGuessValidity(std::string)
{
	return false;
}

bool FGuessTheWord::IsISogram(std::string)
{
	return false;
}
