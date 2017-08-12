#include <iostream>
#include <string>
#include "main.h"

using namespace std;

void PrintIntro();
string GetGuessAndPrintBack();

//Entry point
int main()
{
	PrintIntro();
	PlayGame();
	return 0;
}

void PlayGame()
{
	// Loop for the number of turns asking for guesses
	constexpr int NUMBER_OF_TURNS = 5;
	for (int i = 1; i <= NUMBER_OF_TURNS; i++)
	{
		GetGuessAndPrintBack();
	}
}

void PrintIntro()
{
	//Introduce the game
	constexpr int WORLD_LENGTH = 9;
	cout << "Welcome to Bulls and Cows" << endl;
	cout << "Can you guess the " << WORLD_LENGTH << " letter isogram I'm thinking off?" << endl;
	return;
}

string GetGuessAndPrintBack()
{
	//Get a guess from the player
	string Guess;
	cout << "Enter your guess: ";
	getline(cin, Guess);

	//Repeat the guess back to the player
	cout << "You've guessed: " << Guess << endl;
	return Guess;
}