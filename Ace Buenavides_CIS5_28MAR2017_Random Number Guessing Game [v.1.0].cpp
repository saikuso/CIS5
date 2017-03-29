/*	PROGRAMMER NAME: Ace Buenavides
*	PROGRAM TITLE: Random Number Guessing Game
*	PROGRAM VERSION: [v1.0]
*	PROGRAM DESCRIPTION: This program generates a random number between
*	1 and 1000, and it asks the user to guess what the number is.
*	DATE: 28MAR2017
*/

#include <iostream>
#include <cstdlib> // Necessary for the rand and srand functions
#include <ctime> // Necessary for truer number randomization by using
				 // the time function as a seed base.
using namespace std;

int main()
{
	// Generate and Output 20 Random Numbers between 1 and 10
	int count=1;
	
	// Seed Random Generator
	srand(time(0));
	
	while ( count <= 10 )
	{
		int rnd = 1+rand() % 1000;
		srand(time(0) + rnd);
		cout << rnd << endl;
		count++;
	}
}
