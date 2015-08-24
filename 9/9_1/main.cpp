#include "golf.h"

int main()
{
	using std::cout;
	using std::cin;
	golf golfs[10];
	int i;
	for ( i = 0; i < 10; ++i)
	{	
		if (! setgolf(golfs[i]))
		{
			break;
		}
	}

	for ( int j = 0; j < i; ++j)
	{
		showgolf(golfs[j]);
		cout << "Enter a number to update handicap: ";
		int temp;
		if ( cin >> temp)
		{
			handicap(golfs[j], temp);
			showgolf(golfs[j]);
		}
	}
	return 0;
}
	
	
