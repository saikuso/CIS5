#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	// Seed Base for Randomizer
	srand(time(0)); // To not have the same numbers over and over again.
	
	
	// Main Loop Mechanics
	while(true)
	{
		// Variable Declaration and Storage
		int number = rand() % 99 + 2; // System number is stored in here.
		int guess; // User guess is stored in here.
		int tries = 0; // Number of tries is stored here.
		char answer; // User answer to question is stored here.
		
		while(true) { // Get user number loop.
			// Get number.
			cout << "Enter a number between 1 and 100 (" << 20 - tries << " tries left): ";
			cin >> guess;
			cin.ignore();
			
			// Check is tries are taken up.
			if(tries >= 20) {
				break;
			}
			
			// Check number.
			if(guess > number) {
				cout << "Too high! Try again.\n";
			} else if(guess < number) {
				cout << "Too low! Try again.\n";
			} else {
				break;
			}
			
			// If not number, increment tries.
			tries++;
		}
		
		// Check for tries.
		if(tries >= 20) {
			cout << "You ran out of tries!\n\n";
		} else {
			// Or, user won.
			cout<<"Congratulations!! " << endl;
			cout<<"You got the right number in " << tries << " tries!\n";
		}
		
		while(true) { // Loop to ask user is he/she would like to play again.
			// Get user response.
			cout << "Would you like to play again (Y/N)? ";
			cin >> answer;
			cin.ignore();
			
			// Check if proper response.
			if(answer == 'n' || answer == 'N' || answer == 'y' || answer == 'Y') {
				break;
			} else {
				cout << "Please enter \'Y\' or \'N\'...\n";
			}
		}
		
		// Check user's input and run again or exit;
		if(answer == 'n' || answer == 'N') {
			cout << "Thank you for playing!";
			break;
		} else {
			cout << "\n\n\n";
		}
	}
	
	// Safely exit.
	cout << "\n\nEnter anything to exit. . . ";
	cin.ignore();
	return 0;
}
