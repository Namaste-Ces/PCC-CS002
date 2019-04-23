#include <iostream>
#include <cmath>

using namespace std;

int	main()
{
	int N, i, score, maxScore, max, totalScore;
	double avg;

	i = 0;
	totalScore = 0;
	maxScore = 0;

	cout << "How many exercises to input? ";
	cin >> N;

	cout << "\n";

	while (i < N)
	{
		cout << "Score recieved for exercise " << i + 1 <<
		": ";
		cin >> score;
		
		cout << "Total points possible for exercise " << i + 1 <<
		": ";
		cin >> max;

		cout << endl;

		totalScore += score;
		maxScore += max;
	
		i++;
	}
	
	avg = 100.0 * totalScore/maxScore;

	cout << "\nYour total is " << totalScore << " out of " << maxScore <<
	", or " << avg << "%" << endl;

	return 0;
}
