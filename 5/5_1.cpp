#include<iostream>

int main()
{
	using namespace std;
	int a , b , sum;
	cout << "Please enter the first integer: ";
	cin >> a;
	cout << "Please enter the second integer: ";
	cin >> b;

	for(int i = a; i <= b; ++i)
	{
		sum += i;
	}

	cout << sum << endl;
	return 0;
}
