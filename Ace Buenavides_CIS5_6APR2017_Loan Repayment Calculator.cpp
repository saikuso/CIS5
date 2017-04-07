/*	PROGRAMMER NAME: Ace Buenavides
*	PROGRAM TITLE: Loan Repayment Calculator Program
*	PROGRAM DESCRIPTION: This program takes a user input and calculates
*	a table of monthly payments for based on varying interests, principal amounts,
*	and length of loans. 
*	DATE: 6APR2017
*/

#include <iostream> // Necessary for input-output stream
#include <cmath> // Necessary for math-related functions
#include <limits> // Necessary for usage in the input validation void function

using namespace std;



int main()
{
	// Opening Statement
	cout << "============================================\n";
	cout << "LOAN REPAYMENT CALCULATOR\n";
	cout << "============================================\n\n";
	
	cout << "Welcome to this simple loan repayment calculator.\n";
	cout << "This will ask you for the principal amount of a loan\n";
	cout << "and the starting interest rate. This will output\n";
	cout << "a series of tables that showcase the monthly payments\n";
	cout << "in an increasing set of interest rates based on your input.\n";
	cout << "The payments will be divided into increments of 5 years.\n\n";
	
	cout << "============================================\n\n";

	return 0;
}
	
