#include<cstdlib>
#include<ctime>
#include "vect.h"

int main()
{		
	using namespace std;
	using VECTOR::Vector;
	srand(time(0));
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	int trials;
	double min_steps = 0.0;
	double max_steps = 0.0;
	double sum_steps = 0.0;
	cout << "Please enter the number of trials: ";
	cin >> trials;
	cout << "Enter target distance (q to quit): ";
	cin >> target;
	cout << "Enter step length:" ;
	cin >> dstep;
	for ( int i = 0; i < trials; ++i )
	{
		while (result.magval() < target)
		{	
			direction = rand() % 360;
			step.set(dstep, direction, 'p');
			result = result + step;
			steps++;
		}
		sum_steps += steps;
		if ( steps > max_steps )
		{
			max_steps = steps;
		}
		if ( min_steps == 0.0 or steps < min_steps )
		{
			min_steps = steps;
		}		
		result.set(0.0, 0.0);
	}

	cout << "Maximum steps: " << max_steps << endl;
	cout << "Minimum steps: " << min_steps << endl;
	cout << "Average steps: " << sum_steps / trials << endl;
	cout << "EOF\n";
	return 0;
}
