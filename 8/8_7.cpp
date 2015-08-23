#include<iostream>

struct debts
{
	char name[50];
	double amount;
};

template<typename T>
void ShowArray(T arr[], int n);

template<typename T>
void ShowArray(T* arr[], int n);

int main()
{
	using namespace std;
	int things[6] = { 13, 31, 103, 301, 310, 130};
	struct debts mr_E[3] = 
	{
		{"Ima Wolfe", 2400.0},
		{"Urafoxe", 1300.0},
		{"Iby Stout", 1800.0}
	};
	double* pd[3];
	for ( int i = 0; i < 3; i++)
	{
		pd[i] = &mr_E[i].amount;
	}
	cout << "Mr.E's things:\n";
	ShowArray(things, 6);
	cout << "Listing Mr.E's debts:\n";
	ShowArray(pd, 3);
	return 0;
}


template<typename T>
void ShowArray(T arr[], int n)
{
	using namespace std;
	T sum;
	cout << "template A\n";
	cout << n << endl;
	for ( int i = 0; i < n ; ++i )
	{
		sum += arr[i];
	}
	cout << sum << endl;
}
		

template<typename T>
void ShowArray(T* arr[], int n)
{
	using namespace std;
	T sum;
	cout << "template B\n";
	cout << n << endl;
	for ( int i = 0; i < n; ++i )
	{
		sum += *arr[i];
	}
	cout << sum << endl;
}
