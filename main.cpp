//Preprocessor Directive
#include <iostream>
#include <string>

using namespace std;

//Prototypes
void PrintIntro();
void PlayGame();
string GetGuess();

//entry point of ours app
int main()
{
	PrintIntro();
	PlayGame();
	return 0; //exit the application/game
}

//introducing the game
void PrintIntro()
{
	const int WORD_LENGTH = 5;
	cout << "Welcome to Bulls and Cows, a fun word game.\n";
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram I'm thinking of?\n";
	cout << endl;
	return;
}

void PlayGame()
{
	//Loop for the number of turns asking for guesses
	const int NUMBER_OF_TURNS = 5;
	for (int count = 1; count <= NUMBER_OF_TURNS; count++) {
		string Guess = GetGuess();
		cout << "Your guess was: " << Guess << endl;
		cout << endl;
	}
}

string GetGuess()
{
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);
	return Guess;
}