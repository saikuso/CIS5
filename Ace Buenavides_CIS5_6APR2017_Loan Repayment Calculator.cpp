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



int main()
{
	// Variable Declarations
	float interest;
	float principle;
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

	
	cout << "Please enter the dollar amount of your loan: ";
	cin >> principle;
	cout << "Please enter the starting interest rate in (e.g. 0.0475 for 4.75%): ";
	cin >> interest;
	cout << endl << endl;

	// Formula
	float p1 = (interest / 12); //Monthly Interest
	float p2 = (1 + p1); 
	float p3 = (12 * years); 
	float p4 = pow(p2,p3);
	float payment = principle * p1 * ( p4 / (p4-1));

	cout << setprecision(2) << showpoint << fixed;
	cout << setw(33) << "Loan of " << principle << " dollars";
	cout << endl << endl;
	
	
	cout << setw(44) << "Monthly Repayment" << endl << endl;
	
	// Monthly Interest
	cout << setw(42) << "Interest Rates" << endl;
	cout << setw(15) << (interest * 100) << "%";
	cout << setw(15) << (interest * 100 + 0.5) << "%";
	cout << setw(15) << (interest * 100 + 1) << "%";
	cout << setw(15) << (interest * 100 + 1.5) << "%";
	cout << setw(15) << (interest * 100 + 2) << "%";
	
	cout << endl << setw(5) << "Years" << endl;
	
	cout << setw(5) << "5" << setw(10) << payment << setw(15) <<endl;
	cout << setw(5) << "10" << setw(10) << payment << setw(15) << endl;
	cout << setw(5) << "15" << setw(10) << payment << setw(15) << endl;
	cout << setw(5) << "20" << setw(10) << payment << setw(15) << endl;
	cout << setw(5) << "25" << setw(10) << payment << setw(15) << endl;
	cout << setw(5) << "30" << setw(10) << payment << setw(15) << endl;
	
	cout << endl;
	
	// Total Amount Paid
	cout << setw(55) << "Total Amount Paid in Repayments" << endl;
	
	cout << setw(5) << "5" << setw(10) << payment << setw(15) << endl;
	cout << setw(5) << "10" << setw(10) << payment << setw(15) << endl;
	cout << setw(5) << "15" << setw(10) << payment << setw(15) << endl;
	cout << setw(5) << "20" << setw(10) << payment << setw(15) << endl;
	cout << setw(5) << "25" << setw(10) << payment << setw(15) << endl;
	cout << setw(5) << "30" << setw(10) << payment << setw(15) << endl;
	
	
	return 0;
}



