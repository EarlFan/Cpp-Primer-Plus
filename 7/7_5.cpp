#include<iostream>

int factorial(int);

int main()
{
	using namespace std;
	int num;
	while ( cin >> num && num > 0)
	{
		cout << factorial(num) << endl;
	}
	return 0;
}

int factorial(int num)
{
	if ( num==1 )
	{
		return 1;
	}
	else
	{
		return num * factorial( num -1 );
	}
}
