//Cesar Rodriguez
//Lab 5 03/06/2019
//CS002

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	string choice;
	int	numClasses, i, flag, j;
	char grade;
	double total, GPA;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	//Initialize variable to count how many times the calculator is used.
	j = 0;

	do
	{	
		total = 0.0;
		i = 0;
		flag = 0;

		while (flag == 0)
		{
			cout << "How many classes did you take? ";
			cin >> numClasses;

			if (numClasses <= 0)
			{
				cout << "Enter valid number of classes\n" << endl;
				flag = 0;
			}
			else
				flag = 1;
		}

		cout << "\nPossible letter grades: + (for A+), A, B, C, D, F\n";

		while (i < numClasses)
		{
			cout << "What was your grade for class #" << i + 1 << ": ";
			cin >> grade;

			if (grade == '+')
				total += 5.0;
			else if (grade == 'A' || grade == 'a')
				total += 4.0;
			else if (grade == 'B' || grade == 'b')
				total += 3.0;
			else if (grade == 'C' || grade == 'c')
				total += 2.0;
			else if (grade == 'D' || grade == 'd')
				total += 1.0;
			i++;
		}
		
		GPA = 1.0 * total/numClasses;

		if (GPA >= 4.0)
			cout << "GPA = " << GPA << " You rank summa cum laude." << endl;
		else if (GPA < 4.0 && GPA >= 3.8)
			cout << "GPA = " << GPA << " You rank magna cum laude." << endl;
		else if (GPA < 3.8 && GPA >= 3.5)
			cout << "GPA = " << GPA << " You rank cum laude." << endl;
		else if (GPA < 3.5 && GPA >= 2.0)
			cout << "GPA = " << GPA << " You passed." << endl;
		else
		{
			//Multiplying GPA times number of classes gives you back the total, 
			//then we add 4.0 to it since we assume the person takes another 
			//course and gets an A in it.
			cout << "Terrible, your GPA was: " << GPA << endl;

			GPA = (GPA * numClasses + 4.0)/(numClasses + 1);

			cout << "If you had taken " << numClasses + 1 << " courses and gotten another A" <<
			" at least your GPA would have been: " << GPA << endl;
		}

		flag = 0;
		//Keeps track that your input is valid or not.
		while (flag == 0)
		{
			cout << "\nDo you want to calculate your GPA again (yes/no)? " ;
			cin >> choice;

			if (choice == "yes" || choice == "Yes")
				flag = 1;
			else if (choice == "No" || choice == "no")
				flag = 2;
			else
				cout << "Invalid input";
		}

		j++;
	} while (flag == 1);

	cout << "This calculator was used: " << j << " times.\n" << endl;

	return 0;
}
