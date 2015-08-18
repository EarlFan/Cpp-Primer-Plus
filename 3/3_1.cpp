#include<iostream>

int main()
{
	using namespace std;
	
	const int FEET = 12;
	cout << "Please enter your height in inches: ";
	int height;
	cin >> height;
	int feet = height/FEET;
	cout << "Your height is: ";
	if (feet > 1)
		cout << feet << " Feet " ;
	else 
		if (feet) 
			cout << feet << " Foot " ;

	cout << height % FEET << " Inches\n";
	return 0;

}
