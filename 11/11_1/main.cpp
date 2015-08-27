#include<cstdlib>
#include<ctime>
#include "vect.h"

int main()
{		
	using namespace std;
	using VECTOR::Vector;
	ofstream of;
	of.open("11_1.log");
	srand(time(0));
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	cout << "Enter target distance (q to quit): ";
	while ( cin >> target)
	{
		cout << "Enter step length:" ;
		if (!(cin >> dstep))
		{
			break;
		}
		of << "Target Distance: " << target;
		of << ", Step Size: " << dstep << endl;

		while (result.magval() < target)
		{	
			direction = rand() % 360;
			step.set(dstep, direction, 'p');
			result = result + step;
			of << steps << ": " << result << endl;
			steps++;
		}
		cout << "After " << steps << " steps, the subject has the following location:\n";
		of << "After " << steps << " steps, the subject has the following location:\n";
		cout << result << endl;
		of << result << endl;
		result.polar_mode();
		cout << " or\n" << result << endl;
		of << " or\n" << result << endl;
		cout << "Average outward distance per step = ";
		of << "Average outward distance per step = ";
		cout << result.magval()/steps << endl;
		of << result.magval()/steps << endl;
		steps = 0;
		result.set(0.0, 0.0);
		cout << "Enter the target distance (q to quit): ";
	}
	cout << "EOF\n";
	of << "EOF\n";
	return 0;
}
