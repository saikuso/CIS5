#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	srand(time(0));
	
	int a = rand();
	cout << a << endl;
	
	int *ptr = (int *)a;
	
	*ptr = 10;
	
	cout << (long)ptr << endl;
	cout << *ptr << endl;
}
