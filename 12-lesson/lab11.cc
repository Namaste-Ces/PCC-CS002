// Cesar A. Rodriguez
// LAB 11 - FUNCTIONS
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

char	getMeALetter()
{
	char randomLetter;

	randomLetter = rand() % (90 + 1 - 65) + 65;

	return randomLetter;
}

bool	isItCloseEnough(double num1, double num2, double cutoff)
{
	if (abs(num1 - num2) <= cutoff)
		return true;
	else
		return false;
}

int		makeRandomInt(int maxNum)
{
	int ran1;
	int ran2;
	int ran3;
	int luck;

	ran1 = (rand() % (maxNum + 1));
	ran2 = (rand() % (maxNum + 1));
	ran3 = (rand() % (maxNum + 1));

	luck = (rand() % 3) + 1;
	if (luck == 1)
		return ran1;
	if (luck == 2)
		return ran2;
	if (luck == 3)
		return ran3;

// In case there are some error and needs to return something.
// it will return the first random number.
	return ran1;
}

int	main()
{
	srand(time(0));

	char letter;
	int runs;
	int i;
	int maxNumber;
	double number1;
	double number2;
	double cutoff;
	
	i = 0;
	runs = 3;
	while (i < runs)
	{
		letter = getMeALetter();
		cout << "Random letter number " << i + 1 << " is " << letter << endl;
		i++;
	}
	
	cout << "\n\n" << endl;
	cout << "We will be using the isItCloseEnough function now." << endl;
	cout << "Please enter two numbers and a cutoff in the following format:" << endl;
	cout << "number1 number2 cutoff" << endl;
	cin >> number1 >> number2 >> cutoff;

	if (isItCloseEnough(number1, number2, cutoff))
	{
		cout << number1 << " and " << number2 << " are within the cutoff of " << 
		cutoff << endl;
	}
	else
	{
		cout << number1 << " and " << number2 << " are not within the cutoff of "<<
		cutoff << endl;
	}

	cout << "\n\n" << endl;
	cout << "Now let's test the makeRandomInt function. You will input a max number\n";
	cout << "Please enter a max number: ";
	cin >> maxNumber;

	cout << "The random number is ===> " << makeRandomInt(maxNumber) << endl;
	cout << "\n" << endl;
	return 0;
}
