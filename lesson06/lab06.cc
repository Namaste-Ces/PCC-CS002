#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int	main()
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);

	char selection;
	int m, s, p, c, flag;

	flag = 1;
	m = 0;
	s = 0;
	p = 0;
	c = 0;

	while (flag == 1)
	{
		cout << "\n\tM) Use the Mysterious Formula\n";
		cout << "\tS) Solve for Mileage of Car\n";
		cout << "\tP) Determine if 2 lines are parallel\n";
		cout << "\tC) Count numbers\n";
		cout << "\tE) Exit\n\n";

		cout << "What would you like to do? ";
		cin >> selection;

		switch(selection)
		{
			case 'M':
			case 'm':
			{
				int a, b, c;
				double result;

				cout << "Enter values for a, b, and c; in that order: ";
				cin >> a >> b >> c;
			
				if (c < 0)
				{
					cout << "The answer is a complex number\n" << endl;
					m++;
					break;
				}
				if (c == 0)
				{
					cout << "ALERT ALERT SINGULARITY DETECTED!!\n" << endl;
					m++;
					break;
				}
				result = (pow(a, 4) + 2.0 * pow(b, 3)) / sqrt(c);
				cout << "The mysterious formula gives an answer x = " << result << "\n";
				m++;
				break;
			}

			case 'G':
			case 'g':
			case 'S':
			case 's':
			{	
				int gasTank, milesDriven, i;
				int records;
				double avgMiles, sum;

				i = 0;
				sum = 0;

				cout << "Enter the size of your gas tank: ";
				cin >> gasTank;

				cout << "How many recordings of gas mileage do you have? ";
				cin >> records;
				cout << "\n";

				while (i < records)
				{
					cout << "Enter the miles driven for trip number " << i + 1 << ": ";
					cin >> milesDriven;
					avgMiles = 1.0 * milesDriven / gasTank;
					sum += avgMiles;
					i++;
				}
				cout << "\nThe average mileage for the last " << records << " is : " << sum / records << "\n" << endl;
				s++;
				break;
			}
			case 'P':
			case 'p':
			{
				double m1, m2, b1, b2;

				cout << "Enter the slope and y-intercept of first line (in order): ";
				cin >> m1 >> b1;

				cout << "Enter the slope and y-intercept of second line (in order): ";
				cin >> m2 >> b2;

				if ( (m1 == m2) && (b1 != b2))
					cout << "\nThe lines are parallel!" << endl;
				else
					cout << "\nThe lines are not parallel..." << endl;

				p++;
				break;
			}

			case 'C':
			case 'c':
			{
				int  maxRange, firstDigit, secondDigit;
				int n, i, sum;

				cout << "Enter the value for the max range (inclusive): ";
				cin >> maxRange;

				cout << "Now, enter a special number n = ";
				cin >> n;
				cout << "\n";
				i = 1;
				while (i <= maxRange)
				{
					firstDigit = i / 10;
					secondDigit = i % 10;

					sum = firstDigit + secondDigit;
					if (sum % n  == 0)
						cout << "Magic number = " << i << endl;
					i++;
				}
				c++;
				break;
			}

			case 'E':
			case 'e':
				cout << "Program Done\n" << endl;
				flag = 0;
				break;
			default:
				cout << "Invalid Input, pick again." << endl;
				break;
		}
	}

	cout << "M ran " << m << " times.\n";
	cout << "S ran " << s << " times.\n";
	cout << "P ran " << p << " times.\n";
	cout << "C ran " << c << " times.\n" << endl;

	return 0;
}
