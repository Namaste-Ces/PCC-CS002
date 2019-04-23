#include <iostream>
#include <cmath>

using namespace std;

int	main()
{
	int count = 15;

	do
	{
		cout << count << " ";
		count /= 2;
	} while (count >= 1);

	cout << "\n" << endl;
	return 0;
}

