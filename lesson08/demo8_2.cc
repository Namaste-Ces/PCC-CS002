#include <iostream>
#include <fstream> // for file stream
#include <cstdlib>

using namespace std;

int main()
{
	ifstream readInFile;
	ofstream readOutFile;

	readInFile.open("inputIntegers.txt");
	if (readInFile.fail())
	{
		cout << "Opening Input File Failed\n";
		exit(1);
	}

	readOutFile.open("results.txt");

	if (readOutFile.fail())
	{
		cout << "Opening Output File Failed\n";
		exit(1);
	}

	int first , second, result;

	readInFile >> first >> second;

	if (first % second == 0 || second % first == 0)
		readOutFile << first << " and " << second << " are factors of one another\n";

	readInFile.close();
	readOutFile.close();

	return 0;
}


