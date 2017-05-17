/*	PROGRAMMER NAME: Ace Buenavides
*	PROGRAM TITLE: Array Searching/Sorting Program [v.1]
*	DATE: 9 MAY 2017
*	DUE: 30 MAY 2017
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>
#include <string>

using namespace std;

// Function Prototypes
int getInteger(string prompt); // Kitty Cat Proof
void displayList(int fill_random[], const int SZ); // Output Array Values
void sort(int fill_random[], const int SZ); // Heap Sort

// Variable Tracker
/*
const int SZ // Array Size
int fill_random[SZ] // Array with constant size
int maxrange // User-defined max randomly generated number range
*/

// Main Function
int main ()
{
	// Opening Statement
	cout << "============================================\n";
	cout << "ARRAY SEARCHING/SORTING PROGRAM\n";
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
	
	// Displays the output of random numbers (pre-sorted)
	displayList(fill_random, SZ);
	
	// Executes Bubble Sort on Array 'fill_random'
	sort(fill_random, SZ);
	
	// Progress Marker (Array Sorted)
	cout << "The array has just been sorted by bubble sort at this point.\n\n";
	
	// Displays the output of random numbers (post-sorted)
	displayList(fill_random, SZ);
	
	
	// STEPS OF THE PROGRAM TO BE DONE
	// prompt for search value
	// do binary search
	
	
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
			if (fill_random[i] > fill_random[i+1])
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

// Binary Search Function (Elements have to be sorted)
int binarySearch(int array[], int size, int value)
{
	int first = 0,						// First array element
		last = size - 1,				// Last array element
		middle, 						// Mid point of search
		position = -1;					// Position of search value
	bool found = false;					// Flag
	
	while (!found && first <= last)
	{
		middle = (first + last) / 2;
		if (array[middle] == value)
		{
			found = true;
			position = middle;
		}
		else if (array[middle] > value)
			last = middle - 1;
		else
			first = middle + 1;
	}
	return position;
}










/*
LAB NOTES / CODE NOTES


EXAMPLE CODE FOR BUBBLE SORTING
main()
{

int hold;
int array[5];
cout<<"Enter 5 numbers: "<<endl;
for(int i=0; i<5; i++)
{
cin>>array[i]; 
} 
cout<<endl; 
cout<<"Orignally entered array by the user is: "<<endl;

for(int j=0; j<5; j++)
{
cout<<array[j];
cout<<endl; 
} 
cout<<endl;
for(int i=0; i<4; i++)
{
for(int j=0; j<4; j++)
{
if(array[j]>array[j+1])
{
hold=array[j];
array[j]=array[j+1];
array[j+1]=hold; 
}
} 
} 
cout<<"Sorted Array is: "<<endl;
for(int i=0; i<5; i++)
{
cout<<array[i]<<endl; 
} 

getch();
}







// Inside of sorting function
Use > For smallest to largest, Use < For largest to smallest
*/


