#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int	main()
{
	srand(time(NULL));

	bool flag = true;
	int guess;
	int answer;
	int previousGuess;

	time_t time1, time2;
	
	answer = rand() % 100 + 1;
	cout << "Correct answer: " << answer << endl;

	previousGuess = -1;

	while (flag == true)
	{
		time1 = time(0);
		cout << "Enter a guess: ";
		cin >> guess;
		time2 = time(0);

		cout << "You took " << (time2 - time1) << " seconds\n";
		
		if (guess == previousGuess)
			cout << "Guess a different number\n";
		previousGuess = guess;

		if (guess == answer)
			break;

	}
	cout << "Done!\n";
	return 0;
}
