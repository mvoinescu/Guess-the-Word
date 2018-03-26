#pragma once
#include <string>


using FString = std::string;
using int32 = int;

struct GuessTheWordCount
{
	int32 CorrectPlacedLetter = 0;
	int32 WrongPlacedLetter = 0;
};

class FGuessTheWord
{
public:
	FGuessTheWord(); // constructor

	int32 GetMaxTries() const;
	int32 GetCurrentTry() const;
	bool IsGameWon() const;

	void Reset(); // TODO make a more rich return value.
	bool CheckGuessValidity(FString); // TODO make a more rich return value.
	
	// Counts correct placed letters and wrong placed letters, and increases try #
	GuessTheWordCount SubmitGuess(FString);
	


	// Ignore this for now
private:
	int32 MyCurrentTry;
	int32 MyMaxTries = 5;
	// bool IsISogram(FString);

};