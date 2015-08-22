#include<iostream>

double calculate(double, double, double (*func)(double, double));
double add(double a, double b)
{
	return a + b;
}
double sub(double a, double b)
{
	return a - b;
}
double mul(double a, double b)
{
	return a * b;
}
double div(double a, double b)
{
	return a / b;
}

int main()
{
	using namespace std;
	double a,b;
	double (*func[4])(double, double) = 
	{
		&add,
		&sub,
		&mul,
		&div
	};
	cout << "Please enter 2 numbers\n";
	while ( (cin>>a) && (cin>>b) )
	{
		for ( int i = 0 ; i < 4 ; ++i )
		{	
			cout << calculate(a, b, func[i]) << endl;
		}
		cout << "Please enter 2 numbers\n";
	}
	return 0;
}

double calculate(double a, double b, double(*func)(double, double))
{
	return func(a, b);
}
