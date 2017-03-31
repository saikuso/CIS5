/*	PROGRAMMER NAME: Ace Buenavides
*	PROGRAM TITLE: Random Number Guessing Game
*	PROGRAM VERSION: [v1.0]
*	PROGRAM DESCRIPTION: This program generates a random number between
*	1 and 1000, and it asks the user to guess what the number is.
*	DATE: 28MAR2017

*	Potential Issues:
*	1) Kitty Cat Test - Check for invalid user inputs
*	2) Main Mechanics - Fix the main loop mechanics
*	3) Attempts Counter - Fix remaining attempts counter
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
	int tries; // Holds the remaining tries
	int number; // Holds the randomly generated number	
	
	// Seeded Number Generator using System Time
	srand(time(0));
	number = rand() % 1000 + 1; // This generates the random number (1-1000 range)
	
	// Main Game Mechanics
	do {
		cout << "Enter what you think the generated number is: " << endl;
		cin >> userguess;
		if (userguess < number)
			cout << "Your guess is too low. Try again.\n" << endl;
		else if (userguess > number)
			cout << "Your guess is too high. Try again.\n" << endl;
		else if (userguess == number)
			cout << "You're on the money! You guessed it right!" << endl;
		else
			break;
		
	} while (userguess != number);
	
	/*


	// Initial Test Code for Running Total Counter
	// for (tries=10; tries>0; tries--)
	//	cout << "You have " << tries << " remaining attempts.\n";


--------------------------------------------------------------------	
------------------------START OF TEMPLATE-----------------------------	
#include <iostream>
#include <cstdlib>
#include <ctime>

int main(void) {
	srand(time(NULL)); // To not have the same numbers over and over again.
	
	while(true) { // Main loop.
		// Initialize and allocate.
		int number = rand() % 99 + 2; // System number is stored in here.
		int guess; // User guess is stored in here.
		int tries = 0; // Number of tries is stored here.
		char answer; // User answer to question is stored here.
		
		//std::cout << number << "\n"; // Was used for debug...
		
		while(true) { // Get user number loop.
			// Get number.
			std::cout << "Enter a number between 1 and 100 (" << 20 - tries << " tries left): ";
			std::cin >> guess;
			std::cin.ignore();
			
			// Check is tries are taken up.
			if(tries >= 20) {
				break;
			}
			
			// Check number.
			if(guess > number) {
				std::cout << "Too high! Try again.\n";
			} else if(guess < number) {
				std::cout << "Too low! Try again.\n";
			} else {
				break;
			}
			
			// If not number, increment tries.
			tries++;
		}
		
		// Check for tries.
		if(tries >= 20) {
			std::cout << "You ran out of tries!\n\n";
		} else {
			// Or, user won.
			std::cout<<"Congratulations!! " << std::endl;
			std::cout<<"You got the right number in " << tries << " tries!\n";
		}
		
		while(true) { // Loop to ask user is he/she would like to play again.
			// Get user response.
			std::cout << "Would you like to play again (Y/N)? ";
			std::cin >> answer;
			std::cin.ignore();
			
			// Check if proper response.
			if(answer == 'n' || answer == 'N' || answer == 'y' || answer == 'Y') {
				break;
			} else {
				std::cout << "Please enter \'Y\' or \'N\'...\n";
			}
		}
		
		// Check user's input and run again or exit;
		if(answer == 'n' || answer == 'N') {
			std::cout << "Thank you for playing!";
			break;
		} else {
			std::cout << "\n\n\n";
		}
	}
	
	// Safely exit.
	std::cout << "\n\nEnter anything to exit. . . ";
	std::cin.ignore();
	return 0;
}
--------------------------------------------------------------------	
------------------------END OF TEMPLATE-----------------------------	
	
	
	
	/* Crazy "For" Demo
	for ( cout << "Init" << endl; cout << "Test" << endl; cout << "Increment" )
	{
		cout << "In loop" << endl;
		if ( tries++ > 20 ) break;
	}
	*/
}
