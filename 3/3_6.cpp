#include<iostream>

const double K2M = 62.14;
const double L2G = 1 / 3.875;

int main()
{
	using namespace std;
	double efficiency;
	cout << "Please enter your fuel efficiency in litres per 100 kilometers:  ";
	cin >> efficiency;
	efficiency = 1 / (efficiency * L2G / K2M);
	cout << "Your fuel efficiency in the U.S. style is: " << efficiency << " miles per gallon. \n";
	return 0;
}
