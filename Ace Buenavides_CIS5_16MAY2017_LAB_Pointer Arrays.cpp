#include <iostream>
using namespace std;

int main()
{
	short a[] = { 3,5,4,7,9,6 };
	
	int sz = sizeof(a) / sizeof(short); // calculate size of my implicit declared array
	
	cout << "address of a is: " << (long)a << endl;
	cout << "data at address of a is: " << *a << endl;
	
	for(int i=0; i<sz; i++)
		cout << a[i] << " ";
	cout << endl;
		
	short *_ptr;
	_ptr = a;
	
	for (int i=0; i<sz; i++)
	{
		cout << (long)_ptr << ": " << *_ptr++ << endl;
	}
	cout << endl;
	
	return 0;
}
