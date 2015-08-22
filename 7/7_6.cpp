#include<iostream>

int Fill_array(double*, int);
void Show_array(const double*, int);
void Reverse_array(double*, int);

int main()
{
	double arr[20];
	int n;
	n = Fill_array(arr, 20);
	double* arr_ = arr + 1;
	Reverse_array(arr_, n - 2);
	Show_array(arr, n);
	return 0;
}

void Show_array(const double* arr, int n)
{
	using namespace std;
	for (int i = 0 ; i < n ; ++i)
	{
		cout << arr[i] << endl;
	}
}

void Reverse_array(double* arr, int n)
{
	--n;
	double tmp;
	for (int i = 0 ; i < n ; ++i)
	{
		tmp = arr[i];
		arr[i] = arr[n - i];
		arr[n - i] = tmp;
	}
}

int Fill_array(double* arr, int n)
{
	using namespace std;
	int i = 0;
	cout << "Please enter the first number: ";
	while ( cin >> 	arr[i])
	{	
		++i;
		if (i == n)
		{
			break;
		}
		cout << "Enter the next number: ";
	}
	return i;
}

	
	
