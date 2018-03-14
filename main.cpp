#include <iostream>
#include <string>
#include "FGuessTheWord.h"


void PrintIntro();
void PlayGame();
std::string GetGuess();
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
	
	constexpr int WORD_LENGHT = 9;
	std::cout << "Welcome to Guess the Word, a fun word game.\n";
	std::cout << "Can you guess the " << WORD_LENGHT;
	std::cout << " letter isogram I'm thinking of?\n";
	std::cout << std::endl;
	return;
}

void PlayGame()
{
	
	GWGame.Reset();
	int MaxTries = GWGame.GetMaxTries();
	
	// loop for the number of turns asking for guesses
	// TODO change from FOR to WHILE loop once we are validating tries
	for (int count = 1; count <= MaxTries; count++)
	{
		std::string Guess = GetGuess(); // TODO make loop checking valid guess

		// Submit valid guess to the game
		// Pring number of correct letters and incorrect placed letters
		std::cout << "You have entered: " << Guess << std::endl;
		std::cout << std::endl;

	}

	// TODO add game summary
	
}

std::string GetGuess()
{	
	
	int CurrentTry = GWGame.GetCurrentTry();
	// get a guess from the player
	std::cout << "Try " << CurrentTry << " Your guess is: ";
	std::string Guess = "";
	std::getline(std::cin, Guess);	
	return Guess;
}

bool AskToPlayAgain()
{
	std::cout << "Do you want to play again? (Y/N)";
	std::string Response = "";
	std::getline(std::cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
}







