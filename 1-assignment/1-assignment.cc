//CESAR A. RODRIGUEZ
//ASSIGNMENT NUMBER 1
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int	main()
{
	ifstream readInFile;
	ofstream readOutFile;
	
	readOutFile.setf(ios::showpoint);
	readOutFile.setf(ios::fixed);
	readOutFile.precision(1);

	bool flag = false;
	char fileName[20];
	int A;
	int B;
	int timesRan;
	char op;
	double solution;
	int count;
	string answer;

	timesRan = 1;

	do
	{
		cout << "Enter file name: ";
		cin >> fileName;

		readInFile.open(fileName);
		
		if (timesRan == 1)
			readOutFile.open("answers.txt");
		else
			readOutFile.open("answers.txt", ios::app);

		if (readInFile.fail())
		{
			cout << "Failed to load file" << endl;
			exit(1);
		}
		
		count = 1;
		while (readInFile >> A >> op >> B)
		{
			readOutFile << setw(2) << right << count << ") " << left;
			switch (op)
			{
				case '+':
				{
					solution = 1.0 * A + B;
					cout << A << " + " << B << " = " << solution << endl;
					readOutFile << setw(12) << solution;
					break;
				}
				case '-':
				{
					solution = 1.0 * A - B;
					cout << A << " - " << B << " = " << solution << endl;
					readOutFile << setw(12) << solution;
					break;
				}
				case '*':
				{
					solution = 1.0 * A * B;
					cout << A << " * " << B << " = " << solution << endl;
					readOutFile << setw(12) << solution;
					break;
				}
				case '/':
				{
					solution = 1.0 * A / B;
					cout << A << " / " << B << " = " << solution << endl;
					readOutFile << setw(12) << solution;
					break;
				}
				default:
				{
					readOutFile << setw(20) << "Not a valid sample";
					cout  << "Not a valid sample" << endl;
					break;
				}
			}
			if (count % 5 == 0)
				readOutFile << "\n" << endl;
			count++;
		}
		
		readOutFile << "\n" << endl;
		cout << "Do you want to read in another file? (Yes/No)" << endl;
		cin >> answer;

		if (answer == "Yes" || answer == "yes" || answer == "YES" || answer == "y" || answer == "Y")
		{
			flag = true;
			timesRan++;
		}
		else
			flag = false;
		
		readInFile.close();
		readOutFile.close();
	} while (flag);
	
	return 0;
}
