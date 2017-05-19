#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	int a[] = {1,3,6,8,9,12,16};
	int sz = sizeof(a) / sizeof(a[0]);
	
	cout << "Address of array a: " << (long)a << endl;
	
	//cout << "Content of a[0]: " << a[0] << endl;
	//cout << "Content of a[1]: " << a[1] << endl;
	//cout << "Content of a[2]: " << a[2] << endl;
	for(int i=0;i<sz;i++)
	{
		cout << "Content of a[" << i <<"]: " << a[i] << endl;
	}
	
	// From a pointer's perspective
	int *ptr = a; // ptr contains the array address
	
	//cout << "Content of memory address " << (long)ptr << " is " << *ptr << endl;
	
	// increment the pointer by 1.... this is taking the address at ptr
	// and adding it to 1 times the size of the data type the ptr is defined
	// for.
	//ptr++;
	//cout << "Content of memory address " << (long)ptr << " is " << *ptr << endl;
	
	//ptr++;
	//cout << "Content of memory address " << (long)ptr << " is " << *ptr << endl;
	for (int i=0;i<sz;i++)
	{
		cout << "Content of memory address " << (long)(ptr+i);
		cout << " is " << *(ptr+i) << endl;
	}
	cout << endl;
	
	srand(time(0));
	for (int i=0;i<sz;i++)
	{
		*(ptr+i) = rand() % 75 + 1;
	}
	
	for (int i=0;i<sz;i++)
	{
		cout << "Content of memory address " << (long)(ptr+i);
		cout << " is " << *(ptr+i) << endl;
	}
}
