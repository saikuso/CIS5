/*	PROGRAMMER NAME: Ace Buenavides
*	PROGRAM TITLE: Array Searching/Sorting Program [v.1.0]
*	DATE: 9 MAY 2017
*	DUE: 30 MAY 2017
*	EARLY BIRD DATE: 16 MAY 2017 @ 2110
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>
#include <string>

using namespace std;

// Function Prototypes
int getInteger(string prompt); 	// Kitty Cat Proof
void displayList(int fill_random[], const int SZ); // Output Array Values
void sort(int fill_random[], const int SZ); // Heap Sort
int binarySearch(int fill_random[], const int SZ, int searchtarget); // Binary Search

// Variable Tracker
/*
const int SZ 			// Array Size Modifier
int fill_random[SZ] 	// Array variable containing numbers
int maxrange 			// User-defined max randomly generated number range
int searchtarget 		// Holds user selected search value
int searchresult		// Holds the result of the binary search function
int holder				// Bubble sort holding variable
*/

// Main Function
int main()
{
	// Opening Statement
	cout << "============================================\n";
	cout << "ARRAY SEARCHING/SORTING PROGRAM [v.1.0]\n";
	cout << "============================================\n\n";
	
	cout << "Welcome to this array searching/sorting program.\n";
	cout << "This will ask you to input the maximum size for the array\n";
	cout << "and will randomly generate numbers to fill the array.\n";
	cout << "The program will output the array of random integers.\n";
	cout << "It will then sort the array of random integers from\n";	
	cout << "largest to smallest using Bubble Sort. It will then\n";
	cout << "output the sorted array and prompt you to enter a value\n";
	cout << "to be searched using Binary Search, and output if it was\n";
	cout << "found and output the index of where the value was located.\n";
	cout << "\n\n";
	
	cout << "============================================\n\n";

	// Variable Declarations
	const int SZ = 50;
	int maxrange;
	int searchtarget;
	int searchresult;
	
	// Declare array 'fill_random' of size SZ
	int fill_random[SZ];
	
	// Prompt for the max range for the numbers to be generated
	maxrange = getInteger("Please enter the maximum integer that will be randomly generated: ");
	cout << "You entered " << maxrange << " as your maximum number\n" << endl;
	
	// Random Number Generator
	srand ( time(0) + SZ ); // Seeds the random number generator
	
	// Fill array 'fill_random' with SZ random numbers and user declared max
	for (int i=0; i< SZ; i++)
	{
		fill_random[i]=(rand()% maxrange)+1;
	}
	
	cout << "The array is being generated with random numbers.\n" << endl;
	
	// Displays the output of random numbers (pre-sorted)
	displayList(fill_random, SZ);
	
	// Executes Bubble Sort on Array 'fill_random'
	sort(fill_random, SZ);
	
	// Progress Marker (Array Sorted)
	cout << "The array has just been sorted with bubble sort at this point.\n\n";
	
	// Displays the output of random numbers (post-sorted)
	displayList(fill_random, SZ);
	
	// Prompt for user's search target
	searchtarget = getInteger("Please enter a value to search within the array: ");
	cout << endl;
	cout << "You entered " << searchtarget << " as your designated search target\n" << endl;
	
	// Execute Binary Search
	binarySearch(fill_random, SZ, searchtarget);
	
	
	// Output Binary Search Results
	searchresult = binarySearch(fill_random, SZ, searchtarget);
	if ( searchresult != -1)
		cout << "Your search target " << searchtarget << " was found at index number " << searchresult << " within the array." << endl;
	else
		cout << "Your search target " << searchtarget << " was not found within the array." << endl;
	
	return 0;
} // End of Main Function


// Function Definitions

// Kitty Cat Test (Integer) Function (DONE)
int getInteger(string prompt)
{
	int value;
	
	do 
	{
		bool validInput;
			
		cout << prompt;
		
		cin >> value;
		validInput = cin.good();
		cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
		
		if (validInput) return value;
		else
		{
			cout << "Invalid Entry! " << endl;
			cin.clear();
			cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
		}
	} while (true);
} // end of getInteger function


// displayList (Output) Function (DONE)
void displayList (int fill_random[], const int SZ)
{
	for (int i=0; i<SZ; i++)
	{
		cout << fill_random[i] << ", ";
		if ((i + 1) % 10 == 0)
		{
			cout << endl;
		}
	}
	cout << "\b\b " << endl;
} // end of displayList function


// Bubble Sort Function (DONE)
void sort (int fill_random[], const int SZ)
{
	bool swapped = false;
	int holder;
	
	do
	{
		swapped = false;
		for (int i=0; i < (SZ-1); i++)
		{
			if (fill_random[i] < fill_random[i+1])
			{
				holder = fill_random[i];
				fill_random[i] = fill_random[i+1];
				fill_random[i+1] = holder;
				swapped=true;
			}
		}
	} while(swapped);
} // end of bubble sort function


// Swap Array Elements Function
void swap(int &a, int &b)
{
	int t = a;
	a = b;
	b = t;
} // end of swap function

// Binary Search Function (Elements have to be sorted) (DONE)
int binarySearch(int fill_random[], const int SZ, int searchtarget)
{
	int first = 0,						// First array element
		last = SZ - 1,					// Last array element
		middle, 						// Mid point of search
		position = -1;					// Position of search value
	bool found = false;					// Flag
	
	while (!found && first <= last)
	{
		middle = (first + last) / 2;
		if (fill_random[middle] == searchtarget)
		{
			found = true;
			position = middle;
		}
		else if (fill_random[middle] < searchtarget)
			last = middle - 1;
		else
			first = middle + 1;
	}
	return position;
}


/*
// Inside of sorting function
Use > For smallest to largest, Use < For largest to smallest
*/


