#include<iostream>

const int MIN = 60;
const int HR = 60;
const int DAY = 24;
const int YR = 365;

int main()
{
	using namespace std;

	int sec, sec_, min, hr, day, yr;
	cout << "Enter the number of seconds: ";
	cin >> sec;
	sec_ = sec;
	min = sec / MIN;
	sec %= MIN;
	hr = min / HR;
	min %= HR;
	day = hr / DAY;
	hr %= DAY;
	yr = day/YR;
	day %= YR;
	cout << sec_ << " seconds = ";
	cout << yr << " years, ";
	cout << day << " days, ";
	cout << hr << " hours, ";
	cout << min << " minutes, ";
	cout << sec << " seconds\n";
	return 0;
}

