#include<iostream>
#define LEN 20

struct car
{
	char make[LEN];
	int year;
};

int main()
{
	using namespace std;
	int n;
	cout << "How many cars do you want to enter?\n";
	cin >> n;
	cin.get();
	car* cars = new car [n];
	for ( int i = 0 ; i < n ; ++i)
	{
		cout << "Car #" << i + 1 << ":\n";
		cout << "Please enter the make: ";
		cin.getline( cars[i].make, LEN );
		cout << "Please enter the year made: ";
		cin >> cars[i].year;
		cin.get();
	}
	
	cout << "Here is your collection:\n";
	for ( int i = 0 ; i < n; ++i)
	{
		cout << cars[i].year << ' ';
		cout << cars[i].make << endl;
	}

	return 0;
}
