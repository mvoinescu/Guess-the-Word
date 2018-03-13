#include <iostream>
#include <string>

//using namespace std;

void PrintIntro();
void PlayGame();
std::string GetGuess();
bool AskToPlayAgain();


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
	// loop for the number of turns asking for guesses
	constexpr int NUMBER_OF_TURNS = 5;
	for (int count = 1; count <= NUMBER_OF_TURNS; count++)
	{
		std::string Guess = GetGuess();
		std::cout << "You have entered: " << Guess << std::endl;
		std::cout << std::endl;

	}
	
}

std::string GetGuess()
{	
	
	// get a guess from the player
	std::cout << "Your guess is: ";
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







