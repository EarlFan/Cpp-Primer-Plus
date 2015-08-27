#include "stonewt.h"

int main()
{
	using namespace std;
	Stonewt elf(11);
	Stonewt list[6];
	Stonewt max;
	Stonewt min;
	int count = 0;
	list[0] = Stonewt(10);
	list[1] = Stonewt(11);
	list[2] = Stonewt(12);
	for ( int i = 3 ; i < 6 ; ++i )
	{
		double temp;
		cout << "Please enter a weigth: ";
		cin >> temp;
		list[i] = Stonewt(temp);
	}
	for ( int i = 0 ; i < 6 ; ++i )
	{
		if ( list[i] > max )
		{
			max = list[i];
		}
		if ( list[i] < min or min == Stonewt(0) )
		{
			min = list[i];
		}
		if ( list[i] >= elf )
		{
			++count;
		}
	};
	cout << max << endl;
	cout << min << endl;
	cout << count << endl;


	return 0;
}
