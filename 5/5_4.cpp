#include<iostream>

int main()
{
	using namespace std;
	char* month[12] = 
	{
		"Janurary",
		"Feburary",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December"
	};

	int sales[12];
	int sum = 0;
	for ( int i = 0 ; i < 12 ; ++i )
	{
		cout << "Enter your sales in " << month[i] << endl;
		cin >> sales[i];
		sum += sales[i];
	}
	cout << sum << endl;
	return 0;
}
