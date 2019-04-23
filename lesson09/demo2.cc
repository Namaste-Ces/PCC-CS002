#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>

using namespace std;

int	main()
{
	ifstream readInFile;
	int someNumber;

	readInFile.open("stuff.txt");
	if (readInFile.fail())
	{
		cout << "Failed to read file\n" << endl;
		exit(1);
	}

	while (readInFile >> someNumber)
	{
		cout << someNumber << endl;
	}




	//int display = 45;
	//cout.setf(ios::left);
	//cout << "This number:" << setw(7) << display << "A\n";
	//cout.width(7);
	//cout << display << "A" << endl;

	return 0;
}
