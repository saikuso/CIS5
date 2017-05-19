/*	PROGRAMMER NAME: Ace Buenavides
	PROGRAM TITLE: Array Searching/Sorting Program [v.1.0]
	DATE: 18 MAY 2017
	DESCRIPTION: Let's write a function named generate_random_array, that takes
	in 3 parameters (size, min, max). Where size is how many random nubers we
	want in our array, min and max are the range of random values. This function
	returns the array.

	Key points to learn:
	1) Dynamically create array with the new keyword.
	2) Utilize pointer arithmetic
	3) Returning arrays.
	4) Static local variables

*/
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <limits>
#include <string>
#include <cmath>

using namespace std;

// Function Prototypes
int * generate_random_array(int size, int min, int max);
void display_array (int *a, int size, int field_width);
int calc_width(int m); // calculates the ideal width for numbers no bigger than m

// Main Function
int main()
{
	// Test Our Function
	// Create a dynamic array of 10 random numbers between 1 and 1000
	int *a = generate_random_array(10,1,1000);
	int *b = generate_random_array(50,0,10000);
	
	int field_width = calc_width(10000);
	
	display_array(a,10,field_width);
	display_array(b,50,field_width);
}

// Function Definition
int * generate_random_array(int size, int min, int max)
{
	static bool seed = false;
	
	if ( !seed )
	{
		srand (time(0));
		seed = true;
	}
	
	// Create our array with size # of elements
	int *p = new int[size];
	
	// Fill the array with random numbers between min and max
	for (int i=0; i<size ; i++)
	{
		*(p+i) = rand() % (max-min+1)+min;	
	}
	
	return p;
}

void display_array (int *a, int size, int field_width)
{
	for(int i=0;i<size;i++)
	{
		cout << setw(field_width) << *(a+i) << " ";
		if ( (i+1) % 5 == 0)
			cout << endl;
	}
	cout << endl;
}

int calc_width(int m) // calculates the ideal width for numbers no bigger than m
{
	return 2+ceil(log10(m));
}
