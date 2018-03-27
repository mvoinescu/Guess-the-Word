/*

	This is the console executable that makes use of  the FGuessTheWord class.
	Acts as a view in the MCV pattern, and is responsible for all user interaction.
	For game logic see the FGuessTheWord class.
	
*/


#include <iostream>
#include <string>
#include "FGuessTheWord.h"

using FText = std::string;
using int32 = int;

void PrintIntro();
void PlayGame();
FText GetGuess();
bool AskToPlayAgain();

FGuessTheWord GWGame; // instantiate a new game

// the entry point for our application
int main()
{
	
	bool bPlayAgain = false;
	do {
		PrintIntro();
		PlayGame();
		bPlayAgain = AskToPlayAgain();
	} while (bPlayAgain);
	


	return 0; // exit the aplication
}


// introduce the game
void PrintIntro()
{
	
	
	std::cout << "Welcome to Guess the Word, a fun word game.\n";
	std::cout << "Can you guess the " << GWGame.GetHiddenWordLenght();
	std::cout << " letter isogram I'm thinking of?\n";
	std::cout << std::endl;
	return;
}

void PlayGame()
{
	
	GWGame.Reset();
	int32 MaxTries = GWGame.GetMaxTries();
	
	// loop for the number of turns asking for guesses
	// TODO change from FOR to WHILE loop once we are validating tries
	for (int32 count = 1; count <= MaxTries; count++)
	{
		FText Guess = GetGuess(); // TODO make loop checking valid guess

		// Submit valid guess to the game, and receive counts
		FGuessTheWordCount GuessTheWordGame = GWGame.SubmitGuess(Guess);
		// Print number of correct letters and incorrect placed letters
		std::cout << "Correct entered letters: " << GuessTheWordGame.CorrectPlacedLetter << std::endl;
		std::cout << "Wrong placed entered letters: " << GuessTheWordGame.WrongPlacedLetter << std::endl;
		std::cout << std::endl;

	}

	// TODO add game summary
	
}

FText GetGuess()
{	
	
	int32 CurrentTry = GWGame.GetCurrentTry();
	// get a guess from the player
	std::cout << "Try " << CurrentTry << " Your guess is: ";
	FText Guess = "";
	std::getline(std::cin, Guess);	
	return Guess;
}

bool AskToPlayAgain()
{
	std::cout << "Do you want to play again? (Y/N)";
	FText Response = "";
	std::getline(std::cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
}







