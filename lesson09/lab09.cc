// Cesar A Rodriguez
// Lab09
// I/O with flags and manipulators
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cmath>

using namespace std;

int	main()
{
	ifstream readInFile;
	ofstream readOutFile;
	
	cout.setf(ios::showpoint);
	cout.setf(ios::fixed);
	cout.precision(3);
	cout.setf(ios::left);
	cout.setf(ios::showpos);
	
	readOutFile.open("duplicate.txt");
	readOutFile.setf(ios::showpoint);
	readOutFile.setf(ios::fixed);
	readOutFile.setf(ios::left);
	readOutFile.setf(ios::showpos);
	readOutFile.precision(3);

	readInFile.open("heightDifferences.txt");

	if (readInFile.fail())
	{
		cout << "File failed to load\n";
		exit(1);
	}

	double num1, initialHeight, finalHeight, distance, temp;
	double newVals;
	int i, extra;

	i = 1;
	distance = 0;
	finalHeight = 0;
	while (readInFile >> num1)
	{
		if (i == 1)
			initialHeight = num1;
	
		readOutFile << setw(10) << num1 << "\n" << endl;
		cout << setw(10) << num1 << endl;
		if (i % 3 == 0)
			cout << endl;
		
		if (i > 1)
			finalHeight += num1;

		distance += abs(num1);
		i++;
	}

	readOutFile.close();
	cout << "\nFinal Height relative to initial position:" <<
	setw(10) << initialHeight + finalHeight << endl;
	cout << "Distance Travelled:" << setw(10) << distance << endl;
	
	cout << "\nHow many extra Height Differences do you want to input? ";
	cin >> extra;
	
	readOutFile.open("duplicate.txt", ios::app);
	readOutFile.setf(ios::showpoint);
	readOutFile.setf(ios::fixed);
	readOutFile.setf(ios::left);
	readOutFile.setf(ios::showpos);
	readOutFile.precision(3);

	cout << "Enter " << extra << " values, one at a time, press enter after each one:" << endl;
	i = 0;
	while (i < extra)
	{
		cin >> newVals;
		readOutFile << setw(10) << newVals << "\n" << endl;
		i++;
	}
	readOutFile.close();
	readInFile.close();

	return 0;
}
