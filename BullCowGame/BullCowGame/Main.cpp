#include <iostream>
#include <string>

using namespace std;

int main()
{
	//Introduce the game
	constexpr int WORLD_LENGTH = 9;
	cout << "Welcome to Bulls and Cows" << endl;
	cout << "Can you guess the " << WORLD_LENGTH << " letter isogram I'm thinking off?" << endl;

	//Get a guess from the player
	string Guess = "";
	cout << "Enter your guess: ";
	getline(cin, Guess);

	//Repeat the guess back to the player
	cout << "You've guessed: " << Guess << endl;

	return 0;
}