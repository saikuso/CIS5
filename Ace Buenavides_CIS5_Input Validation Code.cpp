// input validation example
#include <iostream>
#include <limits>
using namespace std;

int main()
{
	int value;
	
	do 
	{
		// boolean flag variable to store the >> operator result in reading the input
		bool validInput;
		
		// replace this prompt with whatever prompt you need for your program
		// note: this example prompt is telling the user that there are two constraints on their input:
		// 1) it must be an integer
		// 2) the input must be between 1 and 10
		cout << "Enter an integer value between 1 and 10: ";
		
		// the >> operator with the cin object will return true if a value was successfully extracted
		// from the keyboard and stored in the variable, otherwise it will return false if non valid
		// characters are entered
		validInput = cin >> value;
		
		// if validInput is true AND the input value is in the range specified in our prompt, break the loop
		if ( (value >= 1 && value <= 10) && validInput ) break;
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
	
	cout << "You entered the value of " << value << endl;
	return 0;
}
