#include "FGuessTheWord.h"



FGuessTheWord::FGuessTheWord()
{
	Reset();

}

int FGuessTheWord::GetMaxTries() const { return MyMaxTries; }
int FGuessTheWord::GetCurrentTry() const { return MyCurrentTry; }


void FGuessTheWord::Reset()
{
	constexpr int MAX_TRIES = 8;
	MyCurrentTry = 1;
	MyMaxTries = MAX_TRIES;

}


bool FGuessTheWord::IsGameWon() const
{
	return false;
}

bool FGuessTheWord::CheckGuessValidity(std::string)
{
	return false;
}

// bool FGuessTheWord::IsISogram(std::string){	return false; }
