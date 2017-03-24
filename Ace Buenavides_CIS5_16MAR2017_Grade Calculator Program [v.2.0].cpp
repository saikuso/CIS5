/*	PROGRAMMER: Ace Buenavides
 *	PROGRAM TITLE: Grade Calculator Program
 *	PROGRAM VERSION: [v2.0]
 *	PROGRAM DESCRIPTION: Will calculate total course grade by using user-inputted values
 *  and calculated with differing category percentage weights
 *	PROGRAM FEATURES: User-entered values for assignments, quizzes, discussion boards, and
 *  final exam grades. Includes 
 *	DATE: 16MAR2017
 
 *	Potential Issues:
 * 	1) Negative values (Input Validation) -Not implemented-
 *	2) Text data inputs (Input Validation) -Not implemented-
 		-This breaks the program.
 
 *	Changelog:
 *	[v.2.0] - Added features - new named constants, iomanip manipulators, and if/else statements
 *	to output the letter grade as well based on the new named constants
 *	[v.1.0] - Initial version
 */


// Includes the necessary 
#include <iostream>
#include <iomanip>

// Denotes that we want to use the standard namespace
using namespace std;

// Named Constant Declarations	
// Used for calculating overall final grade
const float ASSIGN_WEIGHT = .40;
const float QUIZ_WEIGHT = .20;
const float DISC_WEIGHT = .10;
const float FINAL_WEIGHT = .30;
// Used for letter grade determination
const float MIN_A = 90;
const float MIN_B = 80;
const float MIN_C = 70;
const float MIN_D = 60;


// The start of the main function
int main()
{
	// Variable Declarations
	// declares these variables as floating point data types
	float assigntotal, quiztotal, disctotal, finaltotal, finalgrade; 
	
	// Opening Statement
	cout << "GRADE CALCULATOR PROGRAM\n\n";
	cout << "========================\n\n";
	cout << "Program Description: This program will calculate your\n";
	cout << "overall course grade percentage\n";
	cout << "by taking your scores and adjusting them by their weights to\n";
	cout << "give you your total course grade.\n\n";
	cout << "Notes: Enter your percentages in the format of xx.xx\n";
	cout << "for example 75.69% would be entered as 75.69\n";
	cout << "Do not include the % symbol.\n\n";
		
	
	//Output Manipulators
	cout << fixed << showpoint << setprecision(2);
	cout << endl;
		
	// Interactive User Inputs
		// Assignment Percentage Value Input
		cout << "Enter your assignment percentage: ";
		cin >> assigntotal; 
		// Quiz Percentage Value Input
		cout << "Enter your quiz percentage: ";
		cin >> quiztotal; 
		// Discussion Board Percentage Value Input
		cout << "Enter your discussion board percentage: ";
		cin >> disctotal;
		// Final Exam Percentage Value Input
		cout << "Enter your final exam percentage: ";
		cin >> finaltotal; 

		
	// Variable Operations
	// these perform the necessary calculations to get the final course grade percentage
	finalgrade = ASSIGN_WEIGHT * assigntotal;
	finalgrade = finalgrade + QUIZ_WEIGHT * quiztotal;
	finalgrade = finalgrade + DISC_WEIGHT * disctotal;
	finalgrade = finalgrade + FINAL_WEIGHT * finaltotal;
	
	// Results Console Output
	cout << endl;
	cout << setw(6) << "Your final course grade percentage is: " << finalgrade << "%" << endl;
	
	// Letter Grade Determination
	// these use if/else statements to decide what to output based on final grade percentage
	if (finalgrade >= MIN_A)
      cout << "Your final letter grade is A.\n";
   else if (finalgrade >= MIN_B)
      cout << "Your final letter grade is B.\n";
   else if (finalgrade >= MIN_C)
      cout << "Your final letter grade is C.\n";
   else if (finalgrade >= MIN_D)
      cout << "Your final letter grade is D.\n";
   else
      cout << "Your final letter grade is F.\n";
				
	return 0; // returns a code back to the Operating System	
}
