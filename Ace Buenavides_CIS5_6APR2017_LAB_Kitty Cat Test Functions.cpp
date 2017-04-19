#include <iostream>
#include <string>
#include <limits>
using namespace std;

// function prototypes
int getInteger(string prompt);
float getFloat(string prompt);
int getIntegerRange(int min, int max);

void test_getInteger();
void test_getFloat();
void test_getIntegerRange();

int main()
{
	test_getInteger();
	test_getFloat();
	test_getIntegerRange();	
	
	return 0;
}

// function definitions
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
} // end of getInteger function

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

int getIntegerRange(int min, int max)
{
	int value;
	
	do 
	{
		// boolean flag variable to store the >> operator result in reading the input
		bool validInput;
		
		// output the prompt		
		cout << "Enter an integer between " << min << " and " << max << ": ";
		
		// the >> operator with the cin object will return true if a value was successfully extracted
		// from the keyboard and stored in the variable, otherwise it will return false if non valid
		// characters are entered
		cin >> value;
		validInput = cin.good();
		cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
		
		// if validInput is true, return from the function with our value from user
		if ((validInput) && (value >= min && value <= max)) return value;
		else
		{
			// otherwise, let the user know they did an invalid entry
			cout << "Invalid Entry! Must be between " << min << " and " << max << ".";
			cout << endl;
			
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
} // end of getIntegerRange function

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

void test_getIntegerRange()
{
	cout << "Testing getIntegerRange...." << endl;
	
	int value1;
	value1 = getIntegerRange(-100,100);
	cout << "You entered " << value1 << endl;
	
	value1 = getIntegerRange(1,1000);
	cout << "You entered " << value1 << endl;
	
	value1 = getIntegerRange(0, 5);
	cout << "You entered " << value1 << endl;
}

