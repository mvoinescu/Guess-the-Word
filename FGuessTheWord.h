#pragma once
#include <string>


using FString = std::string;
using int32 = int;


// all values initialied to 0
struct FGuessTheWordCount
{
	int32 CorrectPlacedLetter = 0;
	int32 WrongPlacedLetter = 0;
};

enum EGuessStatus
{
	OK,
	Not_Isogram,
	Wrong_Lenght,
	Not_Lowercase,
	Numbers

};

class FGuessTheWord
{
public:
	FGuessTheWord(); // constructor

	int32 GetMaxTries() const;
	int32 GetCurrentTry() const;
	int32 GetHiddenWordLenght() const;

	bool IsGameWon() const;
	EGuessStatus CheckGuessValidity(FString) const; // TODO make a more rich return value.


	void Reset(); // TODO make a more rich return value.
	
	
	// Counts correct placed letters and wrong placed letters, and increases try #
	FGuessTheWordCount SubmitGuess(FString);
	


	// Ignore this for now
private:
	int32 MyCurrentTry;
	int32 MyMaxTries;
	// bool IsISogram(FString);

	FString MyHiddenWord;

};