#include "FGuessTheWord.h"

using FString = std::string;
using int32 = int;

FGuessTheWord::FGuessTheWord()
{
	Reset();

}

int32 FGuessTheWord::GetMaxTries() const { return MyMaxTries; }
int32 FGuessTheWord::GetCurrentTry() const { return MyCurrentTry; }
int32 FGuessTheWord::GetHiddenWordLenght() const{return MyHiddenWord.length();}


void FGuessTheWord::Reset()
{
	constexpr int32 MAX_TRIES = 8;
	MyMaxTries = MAX_TRIES;

	const FString HIDDEN_WORD = "learning";
	MyHiddenWord = HIDDEN_WORD;

	MyCurrentTry = 1;	
	return;

}


bool FGuessTheWord::IsGameWon() const
{
	return false;
}

EGuessStatus FGuessTheWord::CheckGuessValidity(FString) const
{
	if (false) // if the guess is not an isogram, then return an error
	{
		return EGuessStatus::Not_Isogram;
	}
	else if (false) // if it's not all lowercase, return an error
	{
		
		return EGuessStatus::Not_Lowercase;

	}
	else if (false) // if guess lenght, return an error
	{

		return EGuessStatus::Wrong_Lenght;

	}
	else // if not then return Ok
	{
		return EGuessStatus::OK;
	}
	
	
	
}

// received a Valid guess, increments turn. and returns count
FGuessTheWordCount FGuessTheWord::SubmitGuess(FString Guess)
{
	// increment the turn number
	MyCurrentTry++;
	//setup a return variable
	FGuessTheWordCount GuessTheWordCount;

	// loop through all letters in the guess
	int32 HiddenWorldLenght = MyHiddenWord.length();
	for (int32 MyHWChar = 0; MyHWChar < HiddenWorldLenght; MyHWChar++)
	{
		//compare letteres against the hidden word
		for (int32 GChar = 0; GChar < HiddenWorldLenght; GChar++)
		{
			//if they match
			if (Guess[GChar] == MyHiddenWord[MyHWChar])
			{
				
				if (MyHWChar == GChar)
				{ // if they're in the same place

					GuessTheWordCount.CorrectPlacedLetter++; // increment Correct
				}

				else
				{
					GuessTheWordCount.WrongPlacedLetter++; // increment Wrong if not
				}				

			}
			
		}

	}

	return GuessTheWordCount;
}

// bool FGuessTheWord::IsISogram(FString){	return false; }
