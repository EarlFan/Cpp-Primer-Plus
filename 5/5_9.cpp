#include<iostream>
#include<string>

int main()
{
	using namespace std;
	cout << "Enter number of rows.\n";
	int n;
	cin >> n;
	for ( int i = 1 ; i <= n ; ++i )
	{
		cout << string((n - i), '.') + string(i, '*')<< endl;
	}
	return 0;
}
