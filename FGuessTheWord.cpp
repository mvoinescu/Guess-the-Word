#include "FGuessTheWord.h"

using FString = std::string;
using int32 = int;

FGuessTheWord::FGuessTheWord()
{
	Reset();

}

int32 FGuessTheWord::GetMaxTries() const { return MyMaxTries; }
int32 FGuessTheWord::GetCurrentTry() const { return MyCurrentTry; }


void FGuessTheWord::Reset()
{
	constexpr int32 MAX_TRIES = 8;
	MyMaxTries = MAX_TRIES;

	MyCurrentTry = 1;	
	return;

}


bool FGuessTheWord::IsGameWon() const
{
	return false;
}

bool FGuessTheWord::CheckGuessValidity(FString)
{
	return false;
}

// received a Valid guess, increments turn. and returns count
GuessTheWordCount FGuessTheWord::SubmitGuess(FString)
{
	// increment the turn number
	//setup a return variable
	// loop through all letters in the guess
		//compare letteres against the hidden word
	return GuessTheWordCount();
}

// bool FGuessTheWord::IsISogram(FString){	return false; }
