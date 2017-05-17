#include <iostream>
using namespace std;

int main()
{
	int x = 100;
	int y = 110;
	int z = 120;
	
	int *i_ptr; // integer point i_ptr
	
	i_ptr = &x; // i_ptr is assigned to the address of x
	
	cout << "value of x is: " << x << endl;
	cout << "address of x is: " << (long)&x << endl;
	
	cout << "address stored in i_ptr is: " << (long)i_ptr << endl;
	cout << "the data stored at i_ptr address is: " << *i_ptr << endl;
	
	i_ptr = &y; // i_ptr is assigned to the address of y
	cout << "address stored in i_ptr is: " << (long)i_ptr << endl;
	cout << "the data stored at i_ptr address is: " << *i_ptr << endl;
	
	i_ptr = &z; // i_ptr is assigned to the address of y
	cout << "address stored in i_ptr is: " << (long)i_ptr << endl;
	cout << "the data stored at i_ptr address is: " << *i_ptr << endl;
	
	return 0;
}
