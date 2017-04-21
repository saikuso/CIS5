/*	PROGRAMMER NAME: Ace Buenavides
*	PROGRAM TITLE: Exponentiation and GCD Functions
*	PROGRAM VERSION: [v1.0]
*	DATE: 18APR2017
*/

#include <iostream>
#include <limits>
#include <string>
using namespace std;

// Function Prototypes
int integerPower();
int gcd();
int kitty(string prompt);

// Main Function
int main()
{	
	// Opening Statement
	cout << "============================================\n";
	cout << "EXPONENTIATION AND GCD FUNCTIONS\n";
	cout << "============================================\n\n";
	
	cout << "This program demonstrates two functions,\n";
	cout << "the first function named integerPower which\n";
	cout << "returns the value of a base and an exponent\n";
	cout << "and a second function named gcd which returns\n";
	cout << "the greatest common divisor of two numbers, number1\n";
	cout << "and number2 using Euclid's Algorithm to find the gcd\n\n";
	
	cout << "============================================\n\n";
	
	// Menu Output
	cout << "1. Exponentiation Function" << endl;
	cout << "2. GCD Function" << endl;
	cout << "3. Exit Program" << endl;
	cout << endl;
	cout << "Enter a choice (1, 2, or 3): ";
	
	char choice;
	cin >> choice;
	
	switch (choice)
	{
		case '1':	cout << endl << "Your number is: " << integerPower();
					break;
		case '2':	cout << endl << "GCD: " << gcd();
					break;
		case '3':	cout << endl << "You have exited the program." << endl;
					break;
		default: 	cout << "You did not enter a valid choice! The program is terminating.";
	}
	return 0;
} // End of Main Function




// Exponentiation by Squaring Function Definition
int integerPower()
{
	int power, base;
	
	cout << "Please enter a number for the base: ";
	cin >> base;
	cout << "Please enter a number for the power: ";
	cin >> power;

    int result = 1;
    while (power > 0)
	{
        if (power & 1) result *= base;
        power >>= 1;
        base *= base;
    }
    return result;
} // End of Exponentiation by Squaring Function


// Euclid's Algorithm Function Definition
int gcd()
{
	int a, b, t;
	
	cout << "Input your first number: ";
	cin >> a;
	cout << "Input your second number: ";
	cin >> b;
	
	while ( b != 0)
	{
		t = b;
		b = a % b;
		a = t;
	}
	
	return a;
	
} // End of Euclid Function


// Kitty Cat Test Function Definition
int kitty(string prompt)
{
	int value;
	
	do 
	{
		// boolean flag variable to store the >> operator result in reading the input
		bool validInput;
		
		// output the prompt		
		cout << prompt;
		
		// the >> operator with the cin object will return true if a value was successfully extracted
		// from the keyboard and stored in the variable, otherwise it will return false if non valid
		// characters are entered
		cin >> value;
		validInput = cin.good();
		cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
		
		// if validInput is true, return from the function with our value from user
		if (validInput) return value;
		else
		{
			// otherwise, let the user know they did an invalid entry
			cout << "Invalid Entry! " << endl;
			
			// clear the cin object's status (this clears the bad input flag)
			cin.clear();
			
			// if we do not include the following statement, the while loop gets stuck with the
			// invalid input and keeps looping forever, the fix is to clear (ignore) all of the input
			// that is in the buffer. 
			// the statement ignores either the number of characters returned by the max() function (which
			// is a 64 bit integer, OR the '\n' return/newline character; which ever happens first. hint:
			// do 2 to the 64 power on a calculator and that is what max() returns, ALOT OF CHARACTERS!!!
			cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
		}
	} while (true);
	return 0;
} // End of Kitty Cat Test Function


