#include <iostream>
#include <cmath>

using namespace std;

int	main()
{
	char choice;
	int totalCents, quarters, pennies, dimes, nickles;

	cout << "Do you want to make change? ";
	cin >> choice;

	quarters = 0;
	dimes = 0;
	nickles = 0;
	pennies = 0;

	if(choice == 'Y' || choice == 'y')
	{
		cout << "Enter your cents as a whole number: ";
		cin >> totalCents;

		if (totalCents >= 25)
		{
			quarters = totalCents / 25;
			totalCents = totalCents % 25;
		}
		if (totalCents >= 10)
		{
			dimes = totalCents / 10;
			totalCents = totalCents % 10;
		}
		if (totalCents >= 5)
		{
			nickles = totalCents / 5;
			totalCents = totalCents % 5;
		}

		cout << "Quarters: " << quarters << endl;
		cout << "Dimes: " << dimes << endl;
		cout << "Nickles: " << nickles << endl;
		cout << "Pennies: " << totalCents << endl;
		//cout << "change left: " << totalCents << endl;
	}
	return 0;
}
