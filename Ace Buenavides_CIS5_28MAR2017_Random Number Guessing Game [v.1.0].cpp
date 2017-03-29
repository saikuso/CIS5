/*	PROGRAMMER NAME: Ace Buenavides
*	PROGRAM TITLE: Random Number Guessing Game
*	PROGRAM VERSION: [v1.0]
*	PROGRAM DESCRIPTION: This program generates a random number between
*	1 and 1000, and it asks the user to guess what the number is.
*	DATE: 28MAR2017
*/

#include <iostream>
#include <cstdlib> // Necessary for the rand and srand functions
#include <ctime> // Necessary for truer number randomization by using
				 // the time function as a seed base.
using namespace std;



int main()
{
	// Variable Declarations
	int guess = 0;
	
	// Opening Statement
	cout << "RANDOM NUMBER GUESSING GAME\n\n";
	cout << "===========================\n\n";
	cout << "You have 10 tries to guess a number from\n";
	cout << "1 to 1000. Good luck!\n\n";
	
	// Interactive User Inputs
	cout << "Enter what you guess the generated number is: " << endl;
	cin >> guess;
	
	cout << guess;
	
	
	
	int count = 1;
	
	// Seed Random Generator
	srand(time(0));
	
	
	while ( count <= 10 )
	{
		int randomgen = 1+rand() % 1000; // This holds the randomly generated number (1-1000 range)
		srand(time(0) + randomgen);
		cout << randomgen << endl;
		count++;
	}
	
}
