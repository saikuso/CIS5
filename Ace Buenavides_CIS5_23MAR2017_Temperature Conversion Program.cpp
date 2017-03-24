#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	// Variable declarations
	float fahrenheit, celsius, kelvin;

	// Output our menus
	cout << "Temperature Converter" << endl;
	cout << "=====================" << endl;
	cout << endl;
	
	// Output our choices
	cout << "1. Convert Fahrenheit to Celsius" << endl;
	cout << "2. Convert Fahrenheit to Kelvin" << endl;
	cout << "3. Convert Celsius to Fahrenheit" << endl;
	cout << "4. Convert Celsius to Kelvin" << endl;
	cout << "5. Convert Kelvin to Fahrenheit" << endl;
	cout << "6. Convert Kelvin to Celsius" << endl;
	cout << "Q. Quit Program" << endl;
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
		case '1': 	cout << "Enter Fahrenheit degrees: " << endl;
					cin >> fahrenheit;
					celsius = (fahrenheit - 32) / 1.8;
					cout << setw(9) << fahrenheit << " degrees fahrenheit is ";
					cout << setw(9)	<< celsius << " degrees celsius" << endl;
					break;
		case '2':	cout << "Enter Fahrenheit degrees: " << endl;
					cin >> fahrenheit;
					kelvin = (fahrenheit + 459.67) / 1.8;
					cout << setw(9) << fahrenheit << " degrees fahrenheit is ";
					cout << setw(9) << kelvin << " degrees kelvin" << endl;
					break;
		case '3':	cout << "Enter Celsius degrees: " << endl;
					cin >> celsius;
					// fahrenheit = 															// Need the formula (C to F)
					cout << setw(9) << celsius << "degrees celsius is ";
					cout << setw(9) << fahrenheit << "degrees fahrenheit" << endl;
					break;
		case '4':	cout << "Enter Celsius degrees: " << endl;
					cin >> celsius;
					// kelvin = 																// Need the formula (C to K)
					cout << setw(9) << celsius << "degrees celsius is ";
					cout << setw(9) << kelvin << "degrees kelvin" << endl;
					break;
		case '5':
					break;
		case '6':
					break;				
		case '7':	cout << endl << "You have exited the program." << endl;
					break;
		default: // the case in which the user does not choose 1, 2, 3, 4, 5, 6, q, or Q!
					cout << "You did not enter a valid choice!";
					
	}
} 

