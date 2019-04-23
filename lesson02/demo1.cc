#include <iostream>

using namespace std;

int	main()
{
	float dog = 92.1243525;
	
	int first_num, last_num;

	cout << "Enter two numbers: ";
	cin >> first_num >> last_num;

	cout << "The first number entered was: " <<first_num;
	cout << "\nThe second number entered was: "<<last_num<<endl;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	cout << "The value of dog is: " << dog << endl;

	return 0;
}
