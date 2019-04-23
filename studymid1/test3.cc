#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int	main()
{
	/*int numNames;
	string names, name;

	names = "";
	cout << "How many names do you wish to enter (first name only)? :";
	cin >> numNames;

	for (int i = 0; i < numNames; i++)
	{
		cin >> name;
		names = names + "\"" + name + "\"";
		if (i+1 < numNames)
		{
			names += " ->";
		}
	}
	cout << "\n" << names << endl;	
	cout << 9%0 << endl;*/

	ifstream inStream("data.txt");
	if (inStream.fail())
	{
		cout << " fail ";
		exit(1);
	}

	int intVal;
	double floatVal;
	while (inStream >> intVal >> floatVal >> endl)
		cout << intVal << " " << floatVal << endl;

	return 0;
}
