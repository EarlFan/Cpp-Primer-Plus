#include<iostream>

double harmonic_mean(double, double);

int main()
{
	using namespace std;
	int a,b;
	cout << "Please enter 2 numbers: \n";
	cin >> a >> b;
	while(a*b)
	{
		cout << "The harmonic mean of " << a << " and ";
		cout << b << " is " << harmonic_mean(a, b) << endl;
		cout << "Please enter 2 numbers: \n";
		cin >> a >> b;
	}
	return 0;
}

double harmonic_mean(double a, double b)
{
	return 2.0 * a * b / (a + b);
}
		
