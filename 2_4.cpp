#include<iostream>

double convert(double);

int main()
{
	using namespace std;
	double temp;
	cout << "Please enter a Celsuis value: ";
	cin >> temp;
	cout << temp << " degrees Celsius is ";
	cout << convert(temp) << " degrees Fahrenheit.\n";
	return 0;
}

double convert(double temp)
{
	return 1.8 * temp + 32.0;
}
