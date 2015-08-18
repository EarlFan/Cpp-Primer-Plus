#include<iostream>

double convert(double);

int main()
{
	using namespace std;
	cout << "Enter the number of light years: ";
	double dist;
	cin >> dist;
	cout << dist << " light years = ";
	cout << convert(dist) << " astronomical units.\n";
	return 0;
}

double convert(double dist)
{
	return dist * 63240;
}

