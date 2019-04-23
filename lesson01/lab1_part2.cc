// Cesar Rodriguez
// Lab 1 Part 2
// Calculating the hypotenuse of a triangle.

#include <iostream>
#include <cmath>

using namespace std;

int	main()
{
	int base, height, flag;
	float hypotenuse;

	flag = 1;

	while (flag == 1)
	{
		cout<<"What is the base of the triangle?: ";
		cin>>base;
		if (base >= 1)
		{
			flag = 0;
		}
		else
		{
			cout<<"Input a length larger than 0"<<endl;
		}
	}

	while (flag == 0)
	{
		cout<<"What is the height of the triangle?: ";
		cin>>height;
		if (height >= 1)
		{
			flag = 1;
		}
		else
		{
			cout<<"Input a height larger than 0"<<endl;
		}
	}

	hypotenuse = sqrt(pow(base,2) + pow(height,2));

	cout<<"\nThe hypotenuse of the right triangle is: "<<hypotenuse<<endl;

	return 0;
}
