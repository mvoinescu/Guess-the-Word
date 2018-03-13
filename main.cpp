#include <iostream>
#include <string>
using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();
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
	cout << "Welcome to Guess the Word, a fun word game.\n";
	cout << "Can you guess the " << WORD_LENGHT;
	cout << " letter isogram I'm thinking of?\n";
	cout << endl;
	return;
}

void PlayGame()
{
	// loop for the number of turns asking for guesses
	constexpr int NUMBER_OF_TURNS = 5;
	for (int count = 1; count <= NUMBER_OF_TURNS; count++)
	{
		string Guess = GetGuess();
		cout << "You have entered: " << Guess << endl;
		cout << endl;

	}
	
}

string GetGuess()
{	
	
	// get a guess from the player
	cout << "Your guess is: ";
	string Guess = "";
	getline(cin, Guess);	
	return Guess;
}

bool AskToPlayAgain()
{
	cout << "Do you want to play again? (Y/N)";
	string Response = "";
	getline(cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
}







