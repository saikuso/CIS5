#include <iostream>
using namespace std;

int main()
{
	int x = 1;
	int y = 2;
	
	int *ptr;
	
	cout << "address x: " << (long)&x << endl;
	cout << "value of x: " << x << endl;
	cout << "address y: " << (long)&y << endl;
	cout << "value of y: " << y << endl;
	
	ptr = &x;
	cout << "value at address " << (long)ptr << " is " << *ptr << endl;
	
	ptr--;
	
	*ptr = 5;
	cout << "value of x: " << x << endl;
	cout << "value at address " << (long)ptr << " is " << *ptr << endl;
	cout << "address x: " << (long)&x << endl;
	
	return 0;
}
