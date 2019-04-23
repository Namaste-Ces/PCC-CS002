// CESAR A. RODRIGUEZ
// LAB 2 02/25/2019

#include <iostream>

using namespace std;

int main()
{
	double l, p, r, t;
	
	cout << "\nLAB ASSIGNMENT NUMBER 2\n" << endl;

	//Part 1
	cout << "----PART 1----\n" << endl;
	cout << "The size of a string is: " << sizeof(string) << " bytes."<< endl;
	cout << "The size of a long_int is: " << sizeof(long int) << " bytes." << endl;
	cout << "The size of a long_double is: " << sizeof(long double) << " bytes." << endl;
	cout << "The size of a char is: " << sizeof(char) << " byte." << endl;
	
	cout << "\n";
	
	//Part 2
	cout << "----PART 2----\n" << endl;
	cout << "\t\"I don't love you as if you were a rose of salf, topaz,\n" << endl;
	cout << "\tor arrow of carnations that propagate fire:\n" << endl;
	cout << "\tI love you as one loves certain obscure things,\n" << endl;
	cout << "\tsecretly between the shadow and the soul.\"\n" << endl;
	
	//Part 3
	cout << "----PART 3----\n" << endl;
	cout << "\\(\"__\")/\n" << endl;

	//Part 4
	cout << "----PART 4----\n" << endl;
	cout << "Enter the principal, rate of interest, and time (in years): ";
	cin >> p >> r >> t;

	r = r/100;
	l = p*r*t;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);
	cout << "The interest accrued is: $" << l << endl;
	cout.precision(2);
	cout << "The total amount after interest has been added is: $" << l + p << endl;
	cout << endl;

	return 0;
}
