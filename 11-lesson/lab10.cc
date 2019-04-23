//Cesar A. Rodriguez
//CS002 - Lab 10

#include <iostream>
#include <fstream>

using namespace std;

int	main ()
{
	ifstream inFile;
	ofstream outFile;
	
	time_t timeStart, timeEnd;
	char A;
	char B;
	int correct;
	int answer;
	int wrong;
	int response;
	bool flag = false;
	int temp;

	inFile.open("themultiples.txt");
	outFile.open("problemcopy.txt");

	if (inFile.fail())
	{
		cout << "File failed to load.\n";
		exit(1);
	}
	
	cout << "Try to answer the following questions correctly..GO! " << endl;

	temp = -1000;
	inFile.get(A);

	timeStart = time(0);
	correct = 0;

	while (!inFile.eof())
	{
		if (A == ' ')
		{
			outFile << "_";
			inFile.get(B);
			A = B;
			inFile.get(B);
			outFile << A << B;
			cout << A << " * " << B << " = ";
			cin >> response;
			answer = (A - '0') * (B - '0');	
	
			if (response == answer)
				correct++;
			else
				wrong++;
		}
		else if (A == '\n' || A == '\r')
		{
			//This is the problem that we encountered in class.
			//This skips the new line and the extra character turn that
			//windows inserts but the mac reads it as another character.
			outFile << "\n";
		}
		else
		{
			outFile << A;
			inFile.get(B);
			outFile << B;
			cout << A << " * " << B << " = ";
			cin >> response;
			answer = (A - '0') * (B - '0');

			if (response == answer)
				correct++;
			else
				wrong++;
		}
		
		if (temp == response)
			flag = true;
		if (wrong == 2 && flag == true)
		{
			cout << "You have answered wrong two times in a row with the same number!\n" << endl;
			wrong = 0;
			flag = false;
		}

		temp = response;
		inFile.get(A);

	}
	
	timeEnd = time(0);
	cout << "You have answered " << correct << " questions correctly!\n" << endl;
	cout << "It took " << timeEnd - timeStart << " seconds to answer all questions.\n" << endl;
	
	outFile.close();
	inFile.close();
	return 0;
}
