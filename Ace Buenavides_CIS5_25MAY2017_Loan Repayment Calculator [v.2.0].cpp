/*	PROGRAMMER NAME: Ace Buenavides
*	PROGRAM TITLE: Loan Repayment Calculator Program [v.2.0]
*	PROGRAM DESCRIPTION: This program takes a user input and calculates
*	a table of monthly payments for based on varying interests, principal amounts,
*	and length of loans using multi-dimensional arrays
*	DATE: 25MAY2017
*/

#include <iostream> // Necessary for input-output stream
#include <cmath> // Necessary for math-related functions
#include <limits> // Necessary for usage in the input validation void function
#include <iomanip> // Necessary for table formatting
#include <string> // Necessary for Kitty Cat Function

using namespace std;

// Function Prototypes
float getFloat(string prompt);


int main()
{
	// Variable Declarations
	float interest;
	float principal;
	int years = 5;
	const int ROW = 5; // 6 Indexes
	const int COLUMN = 5; // 6 Indexes
	
	// Array Declarations
	float interestRates [ROW][COLUMN]; // Declares the array "interestRates" with 6 rows and 6 columns
	
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

	// Principle Entry
	principal = getFloat("Enter the starting loan in this format\n(e.g. 1250.37 for $1250.37): ");
	cout << "You entered $" << principal << " as your principal\n" << endl;
	
	// Starting Interest Entry
	interest = getFloat("Enter the starting interest rate in this format\n(e.g. 0.0475 for 4.75%): ");
	cout << "You entered " << (interest * 100) << "% as your starting interest rate\n" << endl;

	// Formula Breakdown
	float p1 = (interest / 12); // Monthly Interest
	float p2 = (1 + p1); 
	float p3 = (12 * years); 
	float p4 = pow(p2,p3);
	float payment = principal * p1 * ( p4 / (p4-1)); // Monthly Payment

	// Starting Point of Table
	cout << fixed << showpoint<< setprecision(2);
	cout << setw(33) << "Loan of " << principal << " dollars";
	cout << endl << endl;
	
	
	cout << setw(44) << "Monthly Repayment" << endl << endl;
	
	
	// Monthly Interest Rate Headers
	interest = interest * 100;
	cout << setw(42) << "Interest Rates" << endl;
	cout << setw(14) << interest << "%";
	cout << setw(14) << (interest + 0.5) << "%";
	cout << setw(14) << (interest + 1) << "%";
	cout << setw(14) << (interest + 1.5) << "%";
	cout << setw(14) << (interest + 2) << "%";
	cout << endl << "Years" << endl;
	

	// Monthly Interest Rate Values	
	for (int i=0; i<ROW; i++) // This loops on the rows
	{
		for (int j=0; j<COLUMN; j++) // This loops on the columns
		{
			cout << "Test";
		}
	}

	// Total Amount Paid in Repayments Headers
	cout << setw(55) << endl << "Total Amount Paid in Repayments" << endl;
	
	// Total Amount Paid Values
	for (int i=0; i<ROW; i++) // This loops on the rows
	{
		for (int j=0; j<COLUMN; j++) // This loops on the columns
		{
		
		}
	}

	return 0;	
}


// Function Definitions
// Kitty Cat Test Function Definition
float getFloat(string prompt)
{
	float value;
	
	do 
	{
		bool validInput;
				
		cout << prompt;
		
		cin >> value;
		validInput = cin.good();
		cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
		
		if (validInput) return value;
		else
		{
			cout << "Invalid Entry! " << endl;
			cin.clear();
			cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
		}
	} while (true);
} // end of getFloat function




/* 
//-----------DUMMY CODE

 	/* Interest Rate Headers
	cout << setw(42) << "Interest Rates" << endl;
	float ac_int1 = (interest * 100);
	cout << setw(15) << ac_int1 << "%";
	float ac_int2 = ((interest * 100) + 0.5);
	cout << setw(15) << ac_int2 << "%";
	float ac_int3 = ((interest * 100) + 1);
	cout << setw(15) << ac_int3 << "%";
	float ac_int4 = ((interest * 100) + 1.5);
	cout << setw(15) << ac_int4 << "%";
	float ac_int5 = ((interest * 100) + 2);
	cout << setw(15) << ac_int5 << "%" << endl;
//--------END OF DUMMY CODE
*/
