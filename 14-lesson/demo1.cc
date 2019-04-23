#include <iostream>
#include <cstdlib>

using namespace std;

void	mySwap(int &num1, int &num2)
{
	int	temp = num1;

	num1 = num2;
	num2 = temp;
}

int		main()
{
//	int theMax = 8;

//	int	firstRNG = rand() % theMax + 1;

//	int	secondRNG = rand() % (theMax + 1);

	int	first = 5;
	int	second = 9;

	mySwap(first, second);

	cout << first << " " << second << endl;

	return 0;
}
