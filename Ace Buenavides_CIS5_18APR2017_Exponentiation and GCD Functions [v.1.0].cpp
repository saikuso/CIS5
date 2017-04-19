/*	PROGRAMMER NAME: Ace Buenavides
*	PROGRAM TITLE: Exponentiation and GCD Functions
*	PROGRAM VERSION: [v1.0]
*	DATE: 18APR2017
*	STATUS: INCOMPLETE
*/

#include <iostream>
using namespace std;

// Function Prototypes
void integerPower();
void gcd();
void kitty();

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
	cout << "the greatest common divisor of the numbers, number1\n";
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
		case '1':		// INSERT EXPONENTIATON FUNCTION HERE
		case '2':		// INSERT GCD FUNCTION HERE
		case '3':	cout << endl << "You have exited the program." << endl;
					break;
		default: 	cout << "You did not enter a valid choice! The program is terminating.";
	}
	return 0;
} // End of Main Function



// Function Definitions


// ----------------------
// Integer Powers
void integerPower()
{
	
} // End of Integer Powers Void Function
// ----------------------

// ----------------------
// Euclid's Algorithm
void gcd( )
{
	
} // End of Euclid Void Function
// ----------------------

// ----------------------
// Kitty Cat Test
void kitty()
{
	
} // End of Kitty Cat Test Void Function
// ----------------------








/*----------------CODE TEMPLATE---------------
// Euclid's Algorithm (GCD)
void int gcd( int m, int n)
{
    if(!m || !n)
        return(0);

    for(unsigned int r = m%n; r; m = n, n = r, r = m%n);

    return(n);
}


int main()
{
    printf("50, 5: %d\n", gcd(50,5));
    printf("5, 50: %d\n", gcd(5,50));
    printf("34534, 567568: %d\n", gcd(34534, 567568));

    return(0);
}
----------------------------------------------
// Power Iterative
power_iterative (x,n)
	result = 1
	for ( i = 0; i < n; i++)
		result = result * x
	return result
----------------------------------------------
*/
