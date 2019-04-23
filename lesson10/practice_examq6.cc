#include <iostream>
#include <iomanip>

using namespace std;

int	main()
{
	int number = 80;
	cout << setw(5) << number << setw(7) << (number + 5) << "X";
}
