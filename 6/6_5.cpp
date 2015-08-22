#include<iostream>

int main()
{
	using namespace std;
	int wage;
	int tax;
	while ( cin >> wage && wage >= 0 )
	{
		tax = 0;
		if (wage <= 5000)
		{
			continue;
		}
		wage -= 5000;
		if (wage <= 10000)
		{
			tax += wage * 0.1;
			cout << tax << endl;
			continue;
		}
		tax += 1000;
		wage -= 10000;
		if (wage <= 20000)
		{
			tax += wage * 0.15;
			cout << tax << endl;
			continue;
		}
		tax += 3000;
		wage -= 20000;
		tax += wage * 0.2;
		cout << tax << endl;
	}
	return 0;
}

			

