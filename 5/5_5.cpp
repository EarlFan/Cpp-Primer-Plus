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

	int sales[3][12];
	int sum[3] = { 0, 0, 0 };
	int sums = 0;

	for ( int i = 0 ; i < 3 ; ++i )
	{
		for ( int j = 0 ; j < 12 ; ++j)
		{
			cout << "Please enter your sales in " << month[j];
			cout << " in Year " << i + 1 << endl;
			cin >> sales[i][j];
			sum[i] += sales[i][j];
		}
		cout << "\t" << sum[i] << endl;
		sums += sum[i];
	}
	cout << sums << endl;
	return 0;
}
