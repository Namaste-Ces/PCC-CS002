#include <iostream>

using namespace std;

int	main()
{
	int total;

	total = 5;
	for (int i = 0; i <= 4; i++)
	{
		if ((total + i) % 2 == 0)
			cout << total + i << endl;
	}
	return 0;
}
