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
void loantable();


int main()
{
	// Variable Declarations
	float interest;
	float principal;
	float years;
	
	
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
	
	// Years Entry
	years = getFloat("Enter how long the loan is for in years\n(e.g. 3 for 3 years): ");
	cout << "You entered " << years << " as the length in years for the loan\n" << endl;
	
	// Formula Breakdown
	float p1 = (interest / 12); // Monthly Interest
	float p2 = (1 + p1); 
	float p3 = (12 * years); 
	float p4 = pow(p2,p3);
	float payment = principal * p1 * ( p4 / (p4-1)); // Monthly Payment

	cout << setprecision(2) << showpoint << fixed;
	cout << setw(33) << "Loan of " << principal << " dollars";
	cout << endl << endl;
	
	
	cout << setw(44) << "Monthly Repayment" << endl << endl;
	
	// Monthly Interest
	cout << setw(42) << "Interest Rates" << endl;
	cout << setw(15) << (interest * 100) << "%";
	cout << setw(15) << ((interest * 100) + 0.5) << "%";
	cout << setw(15) << ((interest * 100) + 1) << "%";
	cout << setw(15) << ((interest * 100) + 1.5) << "%";
	cout << setw(15) << ((interest * 100) + 2) << "%";
	
	
	//-THIS NEEDS TO BE REDONE-------START----
	cout << endl << setw(5) << "Years" << endl;
	
	cout << setw(5) << "5" << setw(10) << payment << setw(15) <<endl;
	cout << setw(5) << "10" << setw(10) << payment << setw(15) << endl;
	cout << setw(5) << "15" << setw(10) << payment << setw(15) << endl;
	cout << setw(5) << "20" << setw(10) << payment << setw(15) << endl;
	cout << setw(5) << "25" << setw(10) << payment << setw(15) << endl;
	cout << setw(5) << "30" << setw(10) << payment << setw(15) << endl;
	
	cout << endl;
	
	// Total Amount Paid in Repayments
	cout << setw(55) << "Total Amount Paid in Repayments" << endl;
	
	cout << setw(5) << "5" << setw(10) << payment << setw(15) << endl;
	cout << setw(5) << "10" << setw(10) << payment << setw(15) << endl;
	cout << setw(5) << "15" << setw(10) << payment << setw(15) << endl;
	cout << setw(5) << "20" << setw(10) << payment << setw(15) << endl;
	cout << setw(5) << "25" << setw(10) << payment << setw(15) << endl;
	cout << setw(5) << "30" << setw(10) << payment << setw(15) << endl;
	//-THIS NEEDS TO BE REDONE-------END------
	
	return 0;
}

// Function Definitions


// Loan Repayment Table Function Definition (USE FOR LOOPS)
void loantable()
{
	//for (initilize; test; update) 
	//{
	//	statement;
	//}
} // end of Loan Repayment Table Function



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






