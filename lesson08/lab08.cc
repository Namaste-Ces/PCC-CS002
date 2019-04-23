/*
Cesar A. Rodriguez
CS 002 Lab 08
March 18th 2019
*/

#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int	main()
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);

	ifstream readInFile;
	ofstream readOutFile;
	int p, t, i, j, pVal;
	int count, numTimes, flag;
	double C;
	
	flag = 0;

	readInFile.open("rngNumbers.txt");
	if (readInFile.fail())
	{
		cout << "Read In File Failed\n";
		exit(1);
	}
	
	while (flag == 0)
	{
		cout << "What is the probability of winning a Soda? ";
		cin >> p;

		if (p < 0)
		{
			flag = 0;
			cout << "Cannot be a negative probability\n";
		}
		else if (p > 100)
		{
			cout << "Probability cannot be greater than 100\n";
			flag = 0;
		}
		else
			flag = 1;
	}

	while (flag == 1)
	{
		cout << "How many trials do you want to run? ";
		cin >> t;

		if (t < 0)
		{
			flag = 1;
			cout << "Trial number should be greater than 1\n";
		}
		else
			flag = 0;
	}
	
	readOutFile.open("simulationResults.txt");
	readOutFile << "Probability = " << p << "\nTrials = " << t << "\n";
	readOutFile.close();
		
	numTimes = 0;

	for(i = 0; i < t; i++)
	{
		count = 0;
		for (j = 0; j < 8; j++)
		{	
			readInFile >> pVal;
			if (pVal <= p)
				count += 1;
		}

		if (count <= 3)
			numTimes++;
		if (readInFile.eof())
		{
			cout << "No more numbers\n" << endl;
			exit(1);
		}
	}
	readInFile.close();

	cout << "Number of times 3 or fewer friends won: " << numTimes << endl;

	C = 1.0*numTimes/t;

	cout << "The probability = " << C << "\n";	
	readOutFile.open("simulationResults.txt", std::ofstream::app);
	readOutFile << "The Probability = " << C << "\n";
	readOutFile.close();

	return 0;
}
