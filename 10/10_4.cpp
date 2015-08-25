#include<iostream>
#define QUARTERS 4

class SALES
{
private:
	double sales[QUARTERS];
	double average;
	double max;
	double min;
public:
	SALES();
	SALES(double* ar, int n);
	void show() const;
};

int main()
{
	SALES sales;
	sales.show();
	return 0;
}

SALES::SALES(double* ar, int n)
{
	average = 0;
	max = ar[0];
	min = ar[0];
	for ( int i = 0; i < n; ++i )
	{
		sales[i] = ar[i];
		if ( ar[i] > max)
		{
			max = ar[i];
		}
		else if ( ar[i] < min)
		{
			min = ar[i];
		}
		average += ar[i];
	}
	for ( int i = n; i < 4; ++i)
	{
		sales[i] = 0;
	}

	average /= 4;
}

SALES::SALES()
{
	using namespace std;
	int n;
	double ar[4];
	for ( n = 0; n < 4; ++n)
	{
		cout << "Please enter slaes in Q" << n + 1 << ": ";
		if( !(cin >> ar[n]) )
		{
			break;
		}
	}
	*this = SALES(ar, n);
}

void SALES::show() const
{
	using namespace std;
	for ( int i = 0; i < 4; ++i)
	{
		cout << "Q" << i + 1 << " : " << sales[i] << endl;
	}
	cout << "Max: " << max << endl;
	cout << "Min: " << min << endl;
	cout << "Average : " << average << endl;
}

		
