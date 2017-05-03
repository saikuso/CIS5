/*	PROGRAMMER NAME: Ace Buenavides
*	PROGRAM TITLE: Temperature Stats
*	PROGRAM DESCRIPTION: Initializes an array of float to contain
*	12 monthly temperatures. Calculates minimum, maximum, average, and
*	standard deviation of the array of temperatures. Outputs the values
*	in a meaningful manner for your users.
*	DATE: 27APR2017
*/

#include <iostream>
#include <limits>
using namespace std;



// Function Prototypes
float getFloat(string prompt);
float minTemp();

int main()
{
	// Variable Declarations
	float tempNumbers[] = {getFloat("Enter the temperature values: ")};
	float min = tempNumbers[];
	float max = tempNumbers[];
	float sum = 0.0f;

	
	//for (auto v: temps)
	//{
	//	if (v < min) min = v;
	//	if (v > max) max = v;
	//}
	
	cout << temp[];

	
	return 0;
}


/*--------------------
---LECTURE CODE

int min(int a[], int size)
{
	int smallest = a[0];
	for (int i=0, i < size, i++)
	{
		if (a[i] < smallest)
		{
			smallest = a[i];
		}
		
		return smallest;
	}
}
-----------LECTURE CODE
*/


// Function Definitions
//

float minTemp(float tempNumbers[], int size)
{
	float minTemp = tempNumbers[0];

	for (int i = 0; i < size; i++)
	{
		if (tempNumbers[i] < minTemp)
			minTemp = tempNumbers[i];
	}
	return minTemp;
}


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
