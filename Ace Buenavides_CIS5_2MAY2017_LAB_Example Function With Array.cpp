// Example Function with Array Parameter
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function Prototype for min function
int min(const int [], int);
int max(const int [], int);
void output(const int [], int);
void fill_random(int [], int);

int main()
{
	const int SZ = 5;
	int x[SZ] = { 5, 4, 2, 1, 9 };
	
	output(x,SZ);
	
	int minimum = min(x,SZ);
	int maximum = max(x,SZ);
	
	cout << "The smallest value found was: " << minimum << endl;
	cout << "The largest value found was: " << maximum << endl;
	
	fill_random(x,SZ);
	output(x,SZ);
	
	minimum = min(x,SZ);
	maximum = max(x,SZ);
	cout << "The smallest value found was: " << minimum << endl;
	cout << "The largest value found was: " << maximum << endl;
	return 0;
}

// Function Definition
int min(const int a[], int sz)
{
	int smallest = a[0]; // Initialize smallest to value at a[0]
	
	for (int i=1; i < sz; i++) // Loop Through The Array Elements
	{
		if ( a[i] < smallest ) // If a[i] is smaller than smallest, then
		{
			smallest = a[i]; // Smallest is assigned the value at a[i]
		}
		
		return smallest; // When loop is done, smallest contains smallest
						 // value from the array
	}
}

int max(const int a[], int sz)
{
	int largest = a[0]; // Initialize largest to value at a[0]
	
	for (int i=1; i < sz; i++) // Loop Through The Array Elements
	{
		if ( a[i] > largest ) // If a[i] is larger than largest, then
		{
			largest = a[i]; // Largest is assigned the value at a[i]
		}
		
		return largest; // When loop is done, largest contains largest
						 // value from the array
	}
}
// Output items in the array
void output (const int a[], int sz)
{
	for (int i=0; i<sz; i++)
	{
		cout << a[i] << ", ";
	}
	cout << "\b\b " << endl;
}

// Function to fill array with random numbers between 0..(sz-1)
void fill_random(int a[], int sz)
{
	srand(time(0)+sz); // seed is time(0) + size of array
	for (int i=0; i<sz; i++)
	{
		a[i] = rand() % sz;
	}
}
