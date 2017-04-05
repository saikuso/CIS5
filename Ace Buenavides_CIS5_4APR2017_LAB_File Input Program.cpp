#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

const int FIELD_WIDTH = 10; // field width in the formatted output
const int DIGITS_PREC = 3; // number of digits precision in formatted output

int main()
{
	// step 0
	string filename; // name of file for output
	ifstream infile; // ifstream object for our input file
	float input_value; // value read in from the keyboard
	float min, max, sum; // variables for min value, max value, and sum value
	int counter=0; // counter variable to count number of data values read in
	
	// step 1
	cout << "Read Numbers" << endl << endl;
	cout << "Enter name of the file you want to read: ";
	getline(cin, filename, '\n'); // read in all characters from cin until '\n' encountered
	
	// step 2
	infile.open(filename.c_str() );
	
	// step 2.5
	if ( !infile )
	{
		// file was not successfully opened for input
		cout << "ERROR: Could not read the file named " << filename << endl;
		return 1;
	}
	else
	{
		// step 5
		bool dataRead;
		
		dataRead = infile >> input_value; // if dataRead is true, data was read from file, otherwise false
		
		// step 6 - if dataRead is false, then that means the file was empty
		if ( !dataRead )
		{
			cout << "ERROR: No data to read in the file named " << filename << endl;
			return 2; // return code 2 is our code for no data read
		}
		
		// step 7
		min = input_value;
		max = input_value;
		sum = input_value;
		counter++;
		
		// step 8
		while ( infile >> input_value )
		{
			// step 8.5
			if ( input_value < min ) min = input_value;
			
			// step 8.6
			if ( input_value > max ) max = input_value;
			
			// step 9 and 10
			sum = sum + input_value;
			counter++;
		}
		
		// step 11.5
		infile.close();
		
		// steps 12 - 15, output info to the screen
		cout << "Read in " << setw(8) << counter << " data values" << endl;
		cout << setprecision(DIGITS_PREC) << fixed << showpoint;
		cout << "Minimum value was: " << setw(FIELD_WIDTH) << min << endl;
		cout << "Maximum value was: " << setw(FIELD_WIDTH) << max << endl;
		cout << "Average of values: " << setw(FIELD_WIDTH) << sum / counter << endl;
		
		return 0;
	}
}
