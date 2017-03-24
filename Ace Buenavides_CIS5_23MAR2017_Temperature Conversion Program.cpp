#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;


// To Be Fixed
//	1) Invalid User Inputs on Temperatures

int main()
{

	// Variable declarations
	float fahrenheit, celsius, kelvin;
	
	// Input Validation
	/*
	bool invalidInput = true;
	while ( invalidInput )
	{
		cout << YOUR PROMPT
		cin >> YOUR VARIABLE
		if (YOUR VARIABLE RANGE TEST TRUE) invalidInput=false
		else
		{
			cout << "Invalid Entry!" << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
	*/
	
	// Output our menus
	cout << "Temperature Converter" << endl;
	cout << "by Ace Buenavides" << endl;
	cout << "=====================" << endl;
	cout << endl;
	
	// Output our choices
	cout << "1. Convert Fahrenheit to Celsius" << endl;
	cout << "2. Convert Fahrenheit to Kelvin" << endl;
	cout << "3. Convert Celsius to Fahrenheit" << endl;
	cout << "4. Convert Celsius to Kelvin" << endl;
	cout << "5. Convert Kelvin to Fahrenheit" << endl;
	cout << "6. Convert Kelvin to Celsius" << endl;
	cout << "7. Quit Program" << endl;
	cout << endl;
	
	// Prompt for menu choice
	cout << "Enter a choice (1-7): ";
	
	char choice;
	cin >> choice;
	
	// Output Display Settings Manipulations
	cout << setprecision(2) << fixed << showpoint;
	
	// Switch block for our menu choices
	switch (choice)
	{
		// Case for Fahrenheit to Celsius
		case '1': 	cout << "Enter Fahrenheit degrees: ";
					cin >> fahrenheit; 
					cout << endl;
					celsius = (fahrenheit - 32) * (5.0/9);
					cout << setw(9) << fahrenheit << " degrees Fahrenheit is ";
					cout << setw(9)	<< celsius << " degrees Celsius" << endl;
					break;
		// Case for Fahrenheit to Kelvin
		case '2':	cout << "Enter Fahrenheit degrees: ";
					cin >> fahrenheit;
					cout << endl;
					kelvin = (fahrenheit + 459.67) * (5.0/9);
					cout << setw(9) << fahrenheit << " degrees Fahrenheit is ";
					cout << setw(9) << kelvin << " degrees Kelvin" << endl;
					break;
		// Case for Celsius to Fahrenheit
		case '3':	cout << "Enter Celsius degrees: ";
					cin >> celsius;
					cout << endl;
					fahrenheit = (celsius * (9.0/5) + 32);
					cout << setw(9) << celsius << " degrees Celsius is ";
					cout << setw(9) << fahrenheit << " degrees Fahrenheit" << endl;
					break;
		// Case for Celsius to Kelvin
		case '4':	cout << "Enter Celsius degrees: ";
					cin >> celsius;
					cout << endl;
					kelvin = (celsius + 273.15);
					cout << setw(9) << celsius << " degrees Celsius is ";
					cout << setw(9) << kelvin << " degrees Kelvin" << endl;
					break;
		// Case for Kelvin to Fahrenheit
		case '5':	cout << "Enter Kelvin degrees: ";
					cin >> kelvin;
					cout << endl;
					fahrenheit = (kelvin * (9.0/5) - 459.67);
					cout << setw(9) << kelvin << " degrees Kelvin is ";
					cout << setw(9) << fahrenheit << " degrees Fahrenheit" << endl;
					break;
		// Case for Kelvin to Celsius
		case '6':	cout << "Enter Kelvin degrees: ";
					cin >> kelvin;
					cout << endl;
					celsius = (kelvin - 273.15);
					cout << setw(9) << kelvin << " degrees Kelvin is ";
					cout << setw(9) << celsius << " degrees Celsius" << endl;
					break;				
		// Case for Exiting the Program
		case '7':	cout << endl << "You have exited the program." << endl;
					break;
		// Default Case
		default: // the case in which the user does not choose 1, 2, 3, 4, 5, 6, q, or Q!
					cout << "You did not enter a valid choice!";
					
	}
} 

