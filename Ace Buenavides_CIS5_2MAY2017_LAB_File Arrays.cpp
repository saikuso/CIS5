#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

// Function Prototypes
float min(const float [], int);
float max(const float [], int);
float avg(const float [], int);
float sum(const float [], int);
float std_dev(const float [], int, bool);

void do_magic(ifstream &);

// Main
int main()
{
	string filename;
	
	cout << "Enter name of file you want to read: ";
	getline(cin,filename,'\n');
	
	ifstream input_file;
	
	input_file.open(filename.c_str());
	
	if ( input_file )
	{ // file successfully opened
		do_magic(input_file);
	}
	else
	{ // file unsuccessfully opened
		cout << "Error: could not open " << filename << endl;
		return 1; // error code "1" will signal file could not be opened
	}
}

// do_magic
void do_magic(ifstream &in_file)
{
	// read in all of the data
	int sz; // holds size of list from our file we read in
	
	in_file >> sz;
	
	float array[sz];
	
	for(int i=0;i<sz;i++)
		in_file >> array[i];
		
	in_file.close();
	
	float minimum = min(array,sz);
	float maximum = max(array,sz);
	float sum_of_values = sum(array,sz);
	float avg_of_values = avg(array,sz);
	float s_deviation = std_dev(array,sz,false);
	
	// output all of the results
	cout << setprecision(4) << showpoint << fixed;
	cout << "   Minimum value found: " << setw(10) << minimum << endl;
	cout << "   Maximum value found: " << setw(10) << maximum << endl;
	cout << "    Sum of values read: " << setw(10) << sum_of_values << endl;
	cout << "Average of values read: " << setw(10) << avg_of_values << endl;
	cout << "Std.dev of values read: " << setw(10) << s_deviation << endl;
}

float min(const float a[], int sz)
{
	float smallest = a[0];
	
	for(int i=1;i<sz;i++)
		if ( a[i] < smallest )
			smallest = a[i];
			
	return smallest;
}

float max(const float a[], int sz)
{
	float largest = a[0];
	
	for(int i=1;i<sz;i++)
		if ( a[i] > largest )
			largest = a[i];
			
	return largest;
}

float avg(const float a[], int sz)
{
	return sum(a,sz) / sz;
}

float sum(const float a[], int sz)
{
	float result = 0.0f;
	for(int i=0;i<sz;i++) result = result + a[i]; // you could do sum += a[i]
	return result;
}

float std_dev(const float a[], int sz, bool sample)
{
	float variance;
	float sum_of_var_squared = 0.0f;
	float a_avg = avg(a,sz);
	
	for (int i=0;i<sz;i++)
	{
		variance = a[i] - a_avg;
		sum_of_var_squared += ( variance * variance );
	}
	
	sum_of_var_squared /= (sz-(int)sample);
	
	return sqrt(sum_of_var_squared);
	
	
}
