#include<iostream>
#define Max 5

double* fill_array(double*, int);
void show_array(const double*, const double*);
void revalue(double,double*, double*);

int main()
{
	using namespace std;
	double array[Max];
	double* end = fill_array(array, Max);
	show_array(array, end);
	cout << "Enter the revaluation factor: ";
	double factor;
	cin >> factor;
	revalue(factor, array, end);
	show_array(array, end);
	cout << "Done.\n";
	return 0;
}

double* fill_array(double* array, int len)
{
	using namespace std;
	int i;
	for ( i = 0; i < len ; ++i)
	{
		cout << "Please enter value #" << i + 1 << ": ";
		if (! (cin >> array[i]))
		{
			break;
		}
	}
	return array + i;
}

void show_array(const double* array, const double* end)
{
	using namespace std;
	for (int i = 0 ; array + i < end ; ++i)
	{
		cout << array[i]<< endl;
	}
}

void revalue(double n, double* array, double* end)
{
	for (int i = 0; array + i < end ; ++i)
	{
		array[i] *= n;
	}
}
