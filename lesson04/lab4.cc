//Cesar Rodriguez
//Lab 04

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int	main()
{
	//PART 1
	int x, i;

	x = 60;
	i = 0;

	cout << endl;
	while (i < 13)
	{
		if (x % 4 == 0 && x % 3 == 0)
		{
			cout << "x = " << x << " should be divisible by 12" << endl;
		}
		x -= 2;
		i++;
	}
	cout << endl;

	//PART 2
	int points, die, flag, sumDie, count;
	string firstName, lastName, sentence;
	char choice;

	do{
		sumDie = 0;
		points = 30;
		count = 0;

		do
		{
			flag = 0;
	
			while (flag == 0)
			{
				cout << "Roll a die and enter the number you get (1-6): ";
				cin >> die;

				if (die > 6 || die < 1)
				{
					cout << "Number entered is invalid, re-enter number" << endl;
					flag = 0;
				}
				else
					flag = 1;
			}

			sumDie += die;

			if (die % 2 == 0)
			{
				points = points + die * 2;
			}
			else
				points = points - die * 2;

			cout << "Your current points total is: " << points << endl;

			count++;

		} while (points > 0 && points < 50);

		cout << "\nTotal number of turns: " << count << endl;
		cout << "Average value of die roll: " << 1.0 * sumDie/count << endl;

		if (points <= 0)
		{
			cout << "BETTER LUCK NEXT TIME BUAHAHAHAHAH\n" << endl;
		}
		else
		{
			cout << "Enter First Name followed by Last Name: ";
			cin >> firstName >> lastName;

			sentence = lastName + ", " + firstName + " won the game!\n";

			cout << sentence << endl;
		}	

	cout<< "Play again (y/n): ";
	cin >> choice;
	}while (choice == 'Y' || choice == 'y');

	return 0;
}
