#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int	main()
{
	/*
	string firstName, lastName, fullName;

	firstName = "Cesar ";
	lastName = "Rodriguez";

	cout << "\nConcatenated strings: "
	<< firstName + lastName << "\n" << endl;

	cout << "Your full name: ";
	cin >> fullName;

	cout << "The name entered was: " << fullName << endl;
	*/
	
	char choice;
	double leg1, leg2, hyp;

	cout << "We will be calculating for the Hypotenuse or the leg of a right triangle.\n" << endl;
	cout << "Do you want to solve for the Leg or the Hypotenuse?\n" << endl;
	cout << "PRESS 0 for Leg or 1 for Hypotenuse: ";
	cin >> choice;
	
	if (choice == '0')
	{
		cout << "\nEnter the length of the hypotenuse: ";
		cin >> hyp;

		cout << "\nEnter the length of the other leg: ";
		cin >>leg1;

		leg2 = sqrt(pow(hyp,2) - pow(leg1,2));
	
		cout << "\nThe size of the other leg is ==> " << leg2 << endl;
	}
	else
	{
		cout << "\nEnter the length of leg 1: ";
		cin >> leg1;

		cout << "\nEnter the length of the other leg: ";
		cin >>leg2;
		
		hyp = sqrt(pow(leg2,2) + pow(leg1,2));

		cout << "\nThe size of the hypotenuse is ==> " << hyp << endl;

		/*if (fmod(hyp, rint(hyp)) == 0)
		{
			cout << "Perfect square" << endl;
		}*/
		if (floor(hyp) == ceil(hyp))
		{
			cout << "Perfect square" << endl;
		}

	}

	return 0;
}
