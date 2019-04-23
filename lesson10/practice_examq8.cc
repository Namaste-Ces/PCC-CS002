#include <iostream>
#include <string.h>

using namespace std;

int	main()
{
	string option;
	do
	{
		cout << "Again? ";
		cin >> option;
	} while (option == "continue" || option == "Continue");
}
