// Cesar Rodriguez
// Lab 1 Part 1

#include <iostream>

using namespace std;

int	main(void)
{
	float radius, height, pi, vol;
	int volume;

	pi = 3.14159265;

	cout<<"Enter the radius of the cylinder: ";
	cin>>radius;

	cout<<"Enter the height of the cylinder: ";
	cin>>height;

	vol = pi*radius*radius*height;
	volume = radius*radius*height;

	cout<<"\nThe volume of the cylinder in decimal is: "<<vol<<endl;
	cout<<"The volume of the cylinder in pi form is: "<<volume<<"pi"<<endl;

	return 0;
}
