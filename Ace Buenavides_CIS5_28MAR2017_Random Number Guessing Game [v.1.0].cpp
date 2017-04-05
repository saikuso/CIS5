/*	PROGRAMMER NAME: Ace Buenavides
*	PROGRAM TITLE: Random Number Guessing Game
*	PROGRAM VERSION: [v1.0]
*	PROGRAM DESCRIPTION: This program generates a random number between
*	1 and 1000, and it asks the user to guess what the number is.
*	DATE: 28MAR2017

*	Potential Issues:
*	1) Kitty Cat Test - Check for invalid user inputs
*	2) Main Mechanics - Fix the main loop mechanics
*	3) Attempts Counter - Fix attempts counter
*/

#include <iostream> // Necessary for input-output stream
#include <cstdlib> // Necessary for the rand and srand functions
#include <ctime> // Necessary for truer number randomization by using
				 // the time function as a seed base.
using namespace std;



int main()
{
	// Opening Statement
	cout << "============================================\n";
	cout << "RANDOM NUMBER GUESSING GAME\n";
	cout << "============================================\n\n";
	
	cout << "This is a simple game where you have \n";
	cout << "to guess a number from 1 to 1000. If you \n";
	cout << "guess correctly within 10 attempts, then the \n";
	cout << "program will congratulate you on a job well \n";
	cout << "done. If you guess either too high or \n";
	cout << "too low, the program will indicate as such.\n\n";
	
	cout << "Good luck!\n\n";
	
	cout << "============================================\n\n";
	
	// Variable Declarations
	int userguess;// Holds the user's guess
	int tries = 0; // Holds the amount of attemptes
	int number; // Holds the randomly generated number	
	
	// Seeded Number Generator using System Time
	srand(time(0));
	number = rand() % 1000 + 1; // This generates the random number (1-1000 range)
	
	// Opening Prompt	
	cout << "Enter what you think the generated number is: " << endl;
	cin >> userguess;
	
	// Main Game Mechanics	
	while (userguess != number)
	{
		if(userguess > number)
		{
			cout << "Your guess is too high. Try again.\n" << endl;
			cin >> userguess;
			tries++;
		} 
		if(userguess < number)
		{
			cout << "Your guess is too low. Try again.\n" << endl;
			cin >> userguess;
			tries++;
		}
	}
	if (userguess == number && tries > 10)
	{ 
		cout << "You're on the money! You guessed it right!" << endl;
	}
		else
		{
			cout << "You did it! You got it in less than 10 tries!" << endl;
		}
	
	return 0;
}
