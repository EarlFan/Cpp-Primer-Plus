#include<iostream>


void merge(int, int);

int main()
{
	using namespace std;
	int hr, min;
	cout << "Enter the number of hours: ";
	cin >> hr;
	cout << "Enter the number of minutes: ";
	cin >> min;
	merge(hr,min);
	return 0;
}

void merge(int hr, int min)
{
	using namespace std;
	cout << "Time: " << hr << ':' << min << endl;
}

	
