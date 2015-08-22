#include<iostream>
#define LEN 10

bool input( double arr[], int &n);
void print_arr( const double arr[], int n);
int average_arr( const double arr[], int n);



int main()
{
	using namespace std;
	int n;
	double arr[LEN];
	n =0;
	cout << "Please enter score number 1: ";
	while( input( arr, n ) )
	{
		cout << "Please enter number " << n + 1 << ": ";
	}

	print_arr( arr, n);
	cout << "\nAverage: " << average_arr( arr, n ) << endl;
	return 0;
}

bool input( double arr[], int &n ) 
{
	using namespace std;
	if ( cin >> arr[n] && arr[n] >= 0)
	{
		++n;
		if (n - LEN )
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}

void print_arr( const double arr[], int n )
{
	using namespace std;
	for ( int i=0 ; i < n ; ++i )
	{
		cout << arr[i] << ' ';
	}
}

int average_arr( const double arr[], int n )
{	double sum = 0;
	for ( int i=0 ; i < n ; ++i )
	{
		sum += arr[i];
	}
	return sum/n;
}
