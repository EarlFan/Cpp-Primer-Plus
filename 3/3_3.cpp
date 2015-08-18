#include<iostream>

const int DEG = 60;
const int MIN = 60;

int main()
{
	using namespace std;
	int deg,min;
	float sec;
	cout << "Enter a latitude in degrees, minutes, and seconds\n";
	cout << "First, enter the degrees: ";
	cin >> deg;
	cout << "Next, enter the minutes of arc: ";
	cin >> min;
	cout << "FInally, enter the seconds of arc: ";
	cin >> sec;
	cout << deg << "degrees, ";
	cout << min << "minutes, ";
	cout << sec << "seconds = ";
	cout << deg + (min + sec/MIN)/DEG ;
	cout << " degrees\n";
	return 0;
}
