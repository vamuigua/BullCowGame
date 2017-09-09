//Preprocessor Directive
#include <iostream>
#include <string>

using namespace std;

//Prototypes
void PrintIntro();
string GetGuessAndPrintBack();

//entry point of ours app
int main()
{
	PrintIntro();

	//Loop for the number of turns asking for guesses
	const int NUMBER_OF_TURNS = 5;
	for (int count = 1; count <= NUMBER_OF_TURNS; count++) {
		GetGuessAndPrintBack();
		cout << endl;
	}

	return 0;
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

//get the guess of the user
string GetGuessAndPrintBack() 
{
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);
	//print the guess back
	cout << "Your guess was: " << Guess << endl;
	return Guess;
}