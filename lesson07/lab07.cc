#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <ctime>
#include <chrono>

using namespace std;

int	main()
{
	srand(time(NULL));
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);

	int pointTotal, i, rNum1, rNum2, random, flag, again;
	int guess1, guess2;
	double totalTime, startTime, endTime;
	
	do
	{
		flag = 0;
		pointTotal = 40;
		cout << pointTotal << endl;
	
		do
		{
			//PART 1 of Lab
			random = rand() % (10 - 5 + 1) + 5;
			i = 0;
			//cout << "Random Number = " << random << "\n\n" << endl;

			//PART 2 of Lab
			rNum1 = rand() % (75 - 30 + 1) + 30;

			for (i = 0; i < rNum1; i++)
			{
				if (i % random == 0 && i != 0)
					cout << "\n";
				cout << "* ";
			}

			//cout << "\n" << rNum1 << endl;
			cout << "\n" << endl;
			//cout << "New random number\n" << endl;

			rNum2 = rand() % (75 - 30 + 1) + 30;

			for (i = 0; i < rNum2; i++)
			{
				if (i % random == 0 && i != 0)
					cout << "\n";
				cout << "* ";
			}
			
			cout << "\n";
			//cout << "\n" <<  rNum2 << endl;

			startTime = time(NULL);
			while (guess1 != rNum1 && guess2 != rNum2)
			{
				cout << "How many asterisks are in block one? block two?: ";
				cin >> guess1 >> guess2;
				
				
				if (guess1 == rNum1 && guess2 == rNum2)
				{
					pointTotal += 10;
					cout << "Total Points : " << pointTotal << endl;

					endTime = time(NULL);
					totalTime = endTime - startTime;

					cout << "TOTAL TIME = " << totalTime << endl;
					if (totalTime < 10.0)
					{
						cout << "You did it in less than 10 seconds!, You get an extra 10 points\n" << endl;
						pointTotal += 10;
						cout << "Your new score is: " << pointTotal << endl;
					}
				}
				else if (guess1 == 999 && guess2 == 999)
				{
					pointTotal += 10;
					guess1 = rNum1;
					guess2 = rNum2;
					endTime = time(NULL);
				}
				else if (guess1 == 500 && guess2 == 500)
				{
					endTime = time(NULL);
					cout << "Block 1 = " << rNum1 << "\n";
					cout << "Block 2 = " << rNum2 << "\n";
					cout << "Width of stars (row) = " << random << "\n";
				}
				else
				{
					if (guess1 != rNum1 && guess2 == rNum2)
						cout << "Your first guess was wrong\n" << endl;
					else if(guess1 == rNum1 && guess2 != rNum2)
						cout << "Your second guess was wrong\n" << endl;
					else
						cout << "Both guesses were wrong\n" << endl;
					
					pointTotal -= 10;
					cout << "Total Points: " << pointTotal << endl;
				}
				if (pointTotal <= 0)
					break;
			}

			if (pointTotal >= 80)
				flag = 1;
			else if(pointTotal <= 0)
				flag = 2;
			else
				flag = 0;
		} while (flag == 0);

		if (flag == 1)
			cout << "YOU WON THE GAME, YOU'RE DEXTERITY IS GREAT" << endl;
		else
			cout << "YOU LOST THE GAME, BETTER LUCK NEXT TIME" << endl;

		int flag = 1;
		while (flag == 1)
		{
			cout << "\nDo you want to play again? (1 for yes, 0 for no): ";
			cin >> again;
	
			if (again == 0 || again == 1)
			{
				cout << "Invalid input, choose 0 or 1\n" << endl;
				flag = 0;
			}
		}
	} while (again != 0);
	
	cout << "\n\n";
	return 0;
}
