// INCOMPLETE PROGRAM //
// INTEGER RANGE FUNCTION NOT WORKING //


#include <iostream>
#include <string>
#include <limits>
using namespace std;

//-------------Function Prototypes--------------
int getInteger(string prompt);
float getFloat(string prompt);
int getIntegerRange(int min, int max);

void test_getInteger();
void test_getFloat();
void test_getIntegerRange();

//-------------Start of Main Function-----------
int main()
{
	test_getInteger();
	test_getFloat();
	//test_getIntegerRange();
	return 0;	
} // end of main function


//-------------Function Definitions-------------
int getInteger(string prompt)
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
		
		// if validInput is true, return from the function with our value from user
		if ( validInput ) return value;
		else
		{
			cout << "Invalid Entry! " << endl;
			cin.clear();
			cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
		}
	} while (true);
	
	cout << "You entered the value of " << value << endl;
	return 0;
} // end of getInteger function

float getFloat(string prompt)
{
	float value;
	
	do 
	{
		bool validInput;
	
		cout << prompt;
		
		cin >> value;
		validInput = cin.good();
		
		if ( validInput ) return value;
		else
		{
			cout << "Invalid Entry! " << endl;
			cin.clear();
			cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
		}
	} while (true);
	
	cout << "You entered the value of " << value << endl;
	return 0;
} // end of getFloat function

int getIntegerRange(int min, int max)
{
	int value;
	
	do 
	{
		bool validInput;
		
		cout << "Enter an integer between " << min << " and " << max << ":";
		
		cin >> value;
		validInput = cin.good();
		cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
		
		if ((validInput) && ( value >= min && value <= max)) return value;
		else
		{
			cout << "Invalid Entry! Must be between " << min << " and " << max << ".";
			cout << endl;
			cin.clear();
			cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
		}
	} while (true);
	
	cout << "You entered the value of " << value << endl;
	return 0;
} // end of getIntegerRange function

//--------------VOID FUNCTIONS----------------
void test_getInteger()
{
	cout << "Testing getInteger...." << endl;
	
	int value1;
	value1 = getInteger("Enter an integer: ");
	cout << "You entered " << value1 << endl;
	
	value1 = getInteger("Enter another integer: ");
	cout << "You entered " << value1 << endl;
	
	value1 = getInteger("Enter another integer again: ");
	cout << "You entered " << value1 << endl;
}

void test_getFloat()
{
	cout << "Testing getFloat...." << endl;
	
	float value1;
	value1 = getFloat("Enter a floating point value: ");
	cout << "You entered " << value1 << endl;
	
	value1 = getFloat("Enter another floating point value: ");
	cout << "You entered " << value1 << endl;
	
	value1 = getFloat("Enter another floating point value again: ");
	cout << "You entered " << value1 << endl;
}

/*
void test_getIntegerRange()
{
	cout << "Testing getIntegerRange...." << endl;
	
	int value1;
	value1 = getIntegerRange(int min, int max);
	cout << "You entered " << value1 << endl;
	
	value1 = getIntegerRange(int min, int max);
	cout << "You entered " << value1 << endl;
	
	value1 = getIntegerRange(int min, int max);
	cout << "You entered " << value1 << endl;
}
*/


// KITTY CAT TEST CODE TEMPLATE//
/*
int main()
{
	int value;
	
	do 
	{
		bool validInput;
		cout << "Enter an integer value between 1 and 10: ";
		validInput = cin >> value;
		
		if ( (value >= 1 && value <= 10) && validInput ) break;
		else
		{
			cout << "Invalid Entry! " << endl;
			cin.clear();
			cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
		}
	} while (true);
	
	cout << "You entered the value of " << value << endl;
	return 0;
}
*/
