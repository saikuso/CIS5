/*	PROGRAMMER NAME: Ace Buenavides
*	PROGRAM TITLE: Array Searching/Sorting Program
*	DATE: 9 MAY 2017
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>
#include <string>

using namespace std;

// Function Prototypes


// Variable Tracker
/*
const int SZ // Array Size



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
	const int SZ = 50 
	
	int fill_random[SZ];
	// prompt for N...
	// seed random # generator
	for (int i=0; i< 50; i++)
	{
		fill_random[i]=(rand()% N)+1;
	}
	displayList(fill_random, SZ)
	sort(fill_random, SZ)
	displayList(fill_random, SZ)
	// prompt for search value
	// do binary search
}


// FUNCTION DEFINITIONS

// Kitty Cat Test (Integer) Function (DONE)
int getInteger(string prompt) // EX CALL: getInteger("INSERT PROMPT: ")
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


// FUNCTION FOR BINARY SEARCH (ELEMENTS HAVE TO BE SORTED)
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


// FUNCTION FOR BUBBLE SORTING
sort (int a[], int SZ)
{
	for (int i=0; i < (SZ-1); i++)
	{
		for (int j=1; j < SZ; j++)
		{
			if (a[i] ?? a[j])
				swap (a[i],[a[j])
		}
	}
} // end of sort function

// FUNCTION FOR OUTPUTTING ELEMENTS FROM ARRAY
void output (const int a[], int sz)
{
	for (int i=0; i<sz; i++)
	{
		cout << a[i] << ", ";
	}
	cout << "\b\b " << endl;
} // end of output function

// FUNCTION FOR FILLING ARRAY WITH RANDOM NUMBERS
void fill_random(int a[], int sz)
{
	srand(time(0)+SZ); // seed is time(0) + size of array
	for (int i=0; i<SZ; i++)
	{
		a[i] = rand() % SZ;
	}
} // end of fill_random function

// FUNCTION FOR SWAPPING ARRAY ELEMENTS
void swap(int &a, int &b)
{
	int t = a;
	a = b;
	b = t;
} // end of swap function









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


