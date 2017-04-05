#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	int a = 0.12;
	float b = 3.14159265;
	char c = 'a';
	string d = "hello";
	
	
	// create an ofstream for file output
	ofstream outFile; // outFile is our object of type ofstream

	// open file for output
	outFile.open("example1.txt");
	
	// check to see if file was successfully opened or not.
	if ( !outFile )
	{
		cout << "Error opening file for output." << endl;
		return 1;
	}
	else
	{
		// write out the data
		outFile << a << "\r\n";
		outFile << b << "\r\n";
		outFile << c << "\r\n";
		outFile << d << "\r\n";
	
		// close the file when done reading the data
		outFile.close();
	
		return 0;
	}
}
