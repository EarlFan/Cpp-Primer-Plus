#include<iostream>

int main()
{
	using namespace std;
	double dist, fuel;
	cout << "Enter the amount of fuels in litres: ";
	cin >> fuel;
	cout << "Enter the distance in kilometres: ";
	cin >> dist;
	cout << "Your fuel efficiency is " << fuel / (dist / 100) << " litres per 100 kilometres.\n";
	return 0;
}
