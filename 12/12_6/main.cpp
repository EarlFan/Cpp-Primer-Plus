#include<iostream>
#include<cstdlib>
#include<ctime>
#include "queue.h"


bool newcustomer(double x)
{
	double tmp = std::rand() * x / RAND_MAX ;
	return ( tmp < 1 );
};

int main()
{
	using std::cout;
	using std::endl;
	using std::ios_base;

	std::srand(std::time(0));

	Queue line1(1000);
	Queue line2(1000);

	int CpH = 1;
	Item temp;
	long turnaways = 0;
	long customers = 0;
	long served = 0;
	long sum_line = 0;
	int wait_time = 0;
	double a_wait_time;
	long line_wait = 0;



	while (true)
	{
 	
		for (int cycle = 0; cycle < 10000; ++cycle)
		{	
			if (newcustomer( 60/(double) CpH ) )
			{
				if (line1.isfull() && line2.isfull())
				{
					++turnaways;
				}
				else
				{
					++customers;
					temp.set(cycle);
					if (line1.queuecount() <= line2.queuecount())
					{
						line1.enqueue(temp);
					}
					else
					{
						line2.enqueue(temp);
					}
				}
			}
			if (wait_time <= 0 && !line1.isempty())
			{
				line1.dequeue(temp);
				wait_time = temp.ptime();
				line_wait += cycle - temp.when();
				++served;
			}
			if (wait_time <= 0 && !line2.isempty())

			{
				line2.dequeue(temp);
				wait_time = temp.ptime();
				line_wait += cycle - temp.when();
				++served;
			}
			if (wait_time > 0)
			{
				--wait_time;
			}
	
		}
		a_wait_time = (double) line_wait / served;
		cout << a_wait_time << endl;
		if (a_wait_time >= 1)
		{	
			break;
		}
		++ CpH;
	}
	cout << a_wait_time << endl;
	cout << CpH << endl;
	return 0;
}



		



