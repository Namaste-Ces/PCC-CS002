// Cesar Rodriguez
// Lab 3

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int	main()
{
	int	num1, x, currentYear, modelYear, yearsOld, mileage, gasTank;
	double num2, y, avg, mpg, distance;
	string newCar;


	num1 = 2000000000;
	num1 += 100000000;
	cout << "\n" << endl;
	cout << num1 << endl;

	num1 += 100000000;
	cout << num1 << endl;
	cout << "\nMax value of an int can be: " << pow(2,31) <<endl;
	/* 
	It breaks because an INT's maximum value can be 2,147,483,647.
	Since we start at 2 billion, we can only add 100 million once before overflowing
	the int's capacity
	*/

	num2 = 1;
	cout << num2 << endl;
	while (num2 < pow(10,308))
	{
		num2 *= 10000;
		cout << num2 << endl;
	}
	/*
	I let the number stop around 1E307 since the max value that can be stored in a double
	is rought 1e308.  I multiplied 1 by 10,000 to expedite the process in getting to
	roughly 1E308.  I didn't want to break the double by just adding 1e308 to it, that seemed
	too trivial.  To fix this issue, one can add conditions to the result to make sure it is
	not exeeding ~ 1.7E308.
	*/

	// PART 2

	x = 13;
	y = x % 9;
	y = y * 15.0 + 20.0;
	y *= 12.5;

	cout << "When you input the value of: " << x << " into Alex's BlackBox you get: " << 
	log10(y) << endl;

	// PART 3

	cout << "What model year is your car?: ";
	cin >> modelYear;

	currentYear = 2019;
	yearsOld = currentYear - modelYear;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);

	if (yearsOld > 15)
	{
		cout << "Enter the total mileage of the vehicle to the nearest thousand: ";
		cin >> mileage;

		avg = mileage*1.0 / yearsOld;

		cout.precision(3);
		cout << "The average number of miles driven each year is: " << avg << endl;
	}	
	else
	{
		cout << "Enter an estimate of your car's mileage (nearest thousand) followed by the" <<
		" MPG (whole number): ";
		cin >> mileage >> mpg;

		cout << "Now, please enter size of car's gas tank (nearest whole number): ";
		cin >> gasTank;

		distance = gasTank * mpg;

		cout.precision(1);
		cout << "Trip distance for a full tank of gas is: " << distance << endl;

		cout << "Is this a brand new car? type 'yes' or 'no' ";
		cin >> newCar;
	
		if (newCar == "yes")
		{
			cout << "That's a brand new car" << endl;
		}
	}

	cout << "\nProgram done.\n" << endl;
	return 0;
}
