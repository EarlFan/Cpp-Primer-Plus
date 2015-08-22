#include<iostream>
#define LEN 10

int main()
{
	using namespace std;
	double num[LEN];
	double sum;
	double average;
	int n , i;

	for (i = 0; i < LEN; ++i)
	{
		if (cin >> num[i])
		{
			sum += num[i];
		}
		else
		{
			break;
		}
	}

	average = sum / i;
	cout << "Average: " << average << endl;
	for (int j = 0 ; j < i ; ++j)
	{
		if (num[j] > average)
		{
			++n;
		}
	}
	cout << n << endl;

	return 0;

}
