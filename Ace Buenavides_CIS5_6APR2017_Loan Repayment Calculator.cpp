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
#include <iomanip> // Necessary for table formatting

using namespace std;

// Function Prototypes
float getFloat(string prompt);


int main()
{
	// Variable Declarations
	float interest;
	float ac_int;
	float principal;
	int years = 5;
	
	
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
	cout << setprecision(2) << showpoint << fixed;
	cout << setw(33) << "Loan of " << principal << " dollars";
	cout << endl << endl;
	
	
	cout << setw(44) << "Monthly Repayment" << endl << endl;
	
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
	*/
	
	// Monthly Interest
	interest = interest * 100;
	cout << setw(42) << "Interest Rates" << endl;
	cout << setw(15) << interest << "%";
	cout << setw(15) << (interest + 0.5) << "%";
	cout << setw(15) << (interest + 1) << "%";
	cout << setw(15) << (interest + 1.5) << "%";
	cout << setw(15) << (interest + 2) << "%";

	
	//------FOR LOOP FOR INTEREST RATES
	cout << endl << "Years" << endl;
	
	int row,column; // Table Dimensions (Iterations of Loops)
	
	for (row = 1; row <= 6; row++)
	{
		
		for (column = 1; column <= 5; column++)
		{
			cout << years << setw(15) << payment;
			interest = interest + 0.5;
		}
		cout << endl;
	}
	
	
	
	
	// Total Amount Paid in Repayments Headers
	cout << setw(55) << endl << "Total Amount Paid in Repayments" << endl;
	
	//------FOR LOOP FOR TOTAL AMOUNT PAID
	for (row = 1; row <= 6; row++)
	{
		for (column = 1; column <= 5; column++)
		{
			cout << years << setw(15) << payment;
		}
		cout << endl;
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
} // end of getFloat function






