#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <limits>
using namespace std;

const int FIELD_WIDTH = 10; // field width in the formatted output
const int DIGITS_PREC = 3; // number of digits precision in formatted output

int main()
{
	// step 0
	string filename; // name of file for output
	ofstream outfile; // ofstream object for our output file
	float input_value; // value read in from the keyboard
	char choice; // user choice when prompted to enter another value
	
	// step 1
	cout << "Write Numbers" << endl << endl;
	cout << "Enter name of the file you want to write: ";
	getline(cin, filename, '\n'); // read in all characters from cin until '\n' encountered
	
	// step 2
	outfile.open(filename.c_str() );
	
	// step 2.5 - check if the file was successfully opened
	if ( !outfile )
	{
		// file was not successfully opened for output
		cout << "ERROR: Could not create the file named " << filename << endl;
		return 1;
	}
	else
	{
		// file was successfully opened for output
		// step 3
		do
		{
			do
			{
				// boolenan flag variable to store the >> operator result in reading the input
				bool validInput;
			
				cout << "Enter a floating point value: ";
			
				validInput = cin >> input_value;
			
				if ( validInput) break;
				else
				{
					// otherwise, let the user know they did an invalid entry
					cout << "Invalid Entry! " << endl;
				
					// clear the cin object's status (this clears the bad input flag)
					cin.clear();
					
					cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
				}
			} while (true);
		
			// step 4 - write value to file
			outfile << setw(FIELD_WIDTH) << setprecision(DIGITS_PREC) << showpoint << fixed;
			outfile << input_value << "\n\r";
		
			// step 5 - ask user if they want to enter another value
			cout << "Do you want to enter another value (type y or Y for yes): ";
			cin >> choice;
		} while ( choice == 'y' || choice == 'Y');
	}
	// step 6
	outfile.close();
}
