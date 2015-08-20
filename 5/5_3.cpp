#include<iostream>

int main()
{
	using namespace std;
	int n, sum1, sum2;
	n = 0;
	sum1 = 100;
	sum2 = 100;
	do
	{
		++n;
		sum1 += 10;
		sum2 *= 1.05;
	}
	while (sum2 <= sum1);
	
	cout << n << "th year\n";
	cout << "Daphne: " << sum1 << endl;
	cout << "Cleo: " << sum2 << endl;
	return 0;
}

