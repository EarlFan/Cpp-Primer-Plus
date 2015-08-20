#include<iostream>

int main()
{
	using namespace std;
	int a, sum;
	sum = 0;
	do 
	{
		cin >> a;
		sum += a;
		cout << sum << endl;
	}
	while (a != 0);

	return 0;

}
	
