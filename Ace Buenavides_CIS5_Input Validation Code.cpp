#include <iostream>
#include <limits>
using namespace std;

int main()
{
	bool invalidInput = true;
	int value;
	
	while ( invalidInput )
	{
		cout << "Enter an integer value between 1 and 10: ";
		cin >> value;
		
		if ( value >= 1 && value <=10 ) invalidInput=false;
		else
		{
			cout << "Invalid Entry! " << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),\n');
		}
	}
	
	cout << "You entered the value of " << value << endl;
	return 0;
}
