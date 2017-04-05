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
	ofstream outfile; // ofstream object for our output file
	float input_value; // value read in from the keyboard
	char choice; // user choice when prompted to enter another value
	
	// step 1
	cout << "Write Numbers" << endl << endl;
	cout << "Enter name of the file you want to write: ";
	getline(cin, filename, '\n'); // read in all characters from cin until '\n' encountered
	
	// step 2
	
}
