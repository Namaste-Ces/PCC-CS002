//Cesar A. Rodriguez
//Lab 12 - Overloading Functions

#include <iostream>

using namespace std;

void	newLine();
void	newLine(istream& inputStream);

double	doTheDivide(int num1, int num2)
{
	double quotient;

	quotient = (1.0 *num1) / num2;

	return quotient;
}

double	doTheDivide(int num1, int num2, int toggle)
{
	double quotient;

	if (toggle >= 1)
		quotient = 1.0 * (num1 / num2);
	else
		quotient = (1.0 * num1) / num2;

	return quotient;
}

int	main()
{
	cout.setf(ios::showpoint);
	cout.setf(ios::fixed);
	cout.precision(5);

	int	num1;
	int num2;
	double result;

	cout << "\nWe will be dividing two numbers num1/num2\n" << endl;
	cout << "Enter the first number: ";
	cin >> num1;
	newLine();
	cout << "Enter the second number: ";
	cin >> num2;
	
	if (num2 == 0)
	{
		cout << "We can't divide by zero" << endl;
		cout << "EXITING" << endl;
		return 0;
	}

	cout << "\nUsing function doTheDivide(int, int)" << endl;
	
	result = doTheDivide(num1, num2);

	cout << "doTheDivide(num1, num2) ==> " << result << endl;

	cout << "\nUsing function doTheDivide(int, int, int)" << endl;

	result = doTheDivide(num1, num2, 0);

	cout << "doTheDivide(num1, num2, toggle < 1) ==> " << result << endl;

	cout << "\nUsing function doTheDivide(int, int, int)" << endl;

	result = doTheDivide(num1, num2, 4);

	cout << "doTheDivide(num1, num2, toggle >= 1) ==> " << result << "\n" << endl;

	return 0;
}

void	newLine()
{
	char c;

	do
	{
		cin.get(c);
	} while (c != '\n');
}

void	newLine(istream& inputStream)
{
	char c;

	do
	{
		inputStream.get(c);
	} while (c != '\n');

}

