#include <iostream>

using namespace std;

double	computeAvg(int num1, int num2, int num3)
{
	double avg;

	avg = 1.0 * (num1 + num2 + num3) / 3;
	return avg;
}

bool	isFirstNumberBigger(double firstNum, double secondNum)
{
	if (firstNum > secondNum)
		return 1;
	else
		return 0;
}

int	main()
{
	int a;
	int b;
	int c;
	double avg1;
	double avg2;

	cout << "Enter 3 numbers: ";
	cin >> a >> b >> c;

	avg1 = computeAvg(a, b, c);
	avg2 = computeAvg(15, 23, 14);

	cout << avg1 << " is the average of those three numbers." << endl;
	cout << "Another average is: " << avg2 << endl;

	if (isFirstNumberBigger(avg1, avg2))
		cout << "First num is bigger!" << endl;
	else
		cout << "The first number is not bigger than " << avg2 << endl;
	return 0;
}
