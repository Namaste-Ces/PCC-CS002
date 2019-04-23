#include <iostream>

using namespace std;

//This function will clear all input up to the new line character

void	newLine();
void	newLine(istream& inputStream);
void	newLine(int num1);

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

int		main()
{
	int num1;
	int num2;

	cout << "Enter First Number: ";
	cin >> num1;

	newLine();

	cout << "Enter Second Number: ";
	cin >> num2;

	newLine(cin);

	cout << "The sum is " << num1 + num2 << endl;

	return 0;
}
