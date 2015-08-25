#include "namespace.h"
using namespace SALES;

void SALES::setSales(Sales &s, const double ar[], int n)
{
	s.max = ar[0];
	s.min = ar[0];
	s.average =  0;
	for ( int i =0; i < n; ++i )
	{
		s.sales[i] = ar[i];
		if (ar[i] > s.max)
		{
			s.max = ar[i];
		}
		else if (ar[i] < s.min)
		{
			s.min = ar[i];
		}
		s.average += ar[i];
	}
	for ( int i = n; i < 4 ; ++i )
	{
		s.sales[i] = 0;
	}

	s.average /= 4;
}

void SALES::setSales(Sales &s)
{	
	using namespace std;
	int n;
	double ar[4];
	for ( n = 0 ; n < 4 ; ++n )
	{	
		cout << "Please enter the sales in Q" << n + 1 << endl;
		if(! (cin >> ar[n]))
		{
			break;
		}
	}
	setSales(s, ar, n);
}
		
void SALES::showSales(const Sales &s)
{	
	using namespace std;
	for (int i = 0 ; i < 4 ; ++i)
	{
		cout << "Q" << i + 1 << " :" << s.sales[i] << endl;
	}
	cout << "Max: " << s.max << endl;
	cout << "Min: " << s.min << endl;
	cout << "Average: " << s.average << endl;
}


