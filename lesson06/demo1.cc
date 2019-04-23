#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int	main()
{
	int month;
	string choice;

	do
	{

		cout << "What month were you born in? ";
		cin >> month;

		switch (month)
		{
			case	12:
			case	1:
			case	2:
				cout << "You were born in Winter.\n" << endl;
				break;

			case	3:
			case	4:
			case	5:
				cout << "You were born in Spring.\n" << endl;
				break;

			case	6:
			case	7:
			case	8:
				cout << "You were born in the Summer.\n" << endl;
				break;

			case	9:
			case	10:
			case	11:
				cout << "You were born in the Fall.\n" << endl;
				break;

			default:
				cout << "That's not an actual month... \n" << endl;
		}
		do
		{
			cout << "Do you want to do it again? (yes/no)";
			cin >> choice;

			if (choice == "no" || choice == "No" || choice == "yes" || choice == "Yes")
				break;
		} while (true);
	}	while (choice == "Yes" || choice == "yes");
	
	return 0;
}
