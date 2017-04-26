// Overloaded Function Example
// This program is a stub/driver test for our functions
#include <iostream>
using namespace std;

// Prototype for our overloaded functions
int add(int, int);
int add(int, int, int);
int add(int, float);
int add(float, float);

int main()
{
	// test the functions here
	cout << add(1,2) << endl; // outputs 3
	cout << add(1,2,3) << endl; // outputs 6
	cout << add(1,2) << endl; // outputs 3
	cout << add(1,2.5) << endl; // outputs 3
	cout << add(1,2) << endl; // outputs 3
	cout << add(1.5,2.5) << endl; // outputs 4?
	
	return 0;
}

// definitions of our overloaded functions
int add(int x, int y)
{
	return x+y;
}

int add( int x, int y, z)
{
	return x+y+z;
}

int add(int x, float y)
{
	return x+y;
}

int add(float x, float y)
{
	return x+y;
}
