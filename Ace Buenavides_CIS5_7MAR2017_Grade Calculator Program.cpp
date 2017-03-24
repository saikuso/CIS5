/*	PROGRAMMER: Ace Buenavides
 *	PROGRAM TITLE: Grade Calculator Program
 *	PROGRAM DESCRIPTION: Will calculate total course grade by using user-inputted values
 *  and calculated with differing category percentage weights
 *	PROGRAM FEATURES: User-entered values for assignments, quizzes, discussion boards, and
 *  final exam grades.
 *	DATE: 7MAR2017
 */

// Potential Issues:
// 1) Negative values
// 2) Text data inputs

// Bugs:
// 1) End result is returning a low value
// 2) Missing returns for program instructions
// 3) Text structure gets messy if terminal size is too small

// Includes the input-output data stream
#include <iostream>

// Denotes that we want to use the standard namespace
using namespace std;

// Named Constant Declarations
const float ASSIGN_WEIGHT = .40;
const float QUIZ_WEIGHT = .20;
const float DISC_WEIGHT = .10;
const float FINAL_WEIGHT = .30;

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
	cout << "Your final course grade percentage is: " << finalgrade <<endl;	
				
	return 0; // returns a code back to the Operating System	
}
