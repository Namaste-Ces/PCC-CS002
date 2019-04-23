//Babylonian method square root

#include <iostream>
#include <cmath>

using namespace std;

int	main()
{
	double guess, n, r;
	int count;
	char choice;

	do
	{
	cout << "Compute the square root of: ";
	cin >> n;

	guess = n / 2.0;
	count = 0;
	
	while (count < 100)
	{
		r = n / guess;
		guess = (guess + r) / 2.0;
		count++;
	}
	cout << "The square root is: " << guess << endl;
	
	cout << "Again? ";
	cin >> choice;
	} while (choice == 'Y' || choice == 'y');

	return 0;
}
