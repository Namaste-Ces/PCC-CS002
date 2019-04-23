#include <iostream>

using namespace std;

int	main()
{
	char char1;
	char char2;

	int num;

	cout << "Enter number: ";
	cin >> num;

	cout << "Enter 1 character: ";
	//cin >> char1 >> char2;
	cin.get(char1);
//	cin.get(char2);
	
	cout << "Number is: " << num << " end.\n";
	cout << "Char1 is: " << char1 << " end.\n";
//	cout << "Char2 is: " << char2 << " end.\n";

	
	return 0;
}
