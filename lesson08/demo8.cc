#include <iostream>
#include <cmath>

using namespace std;

int	main()
{
	int i = -1;

	for (int i = 0; i < 10; i+= 3)
	{
		cout << ++i << endl;
	}
	cout << i << endl;
	return 0;
}
