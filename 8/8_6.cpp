#include<iostream>
#include<cstring>

template<typename Any>
Any maxn( Any* item, int len);

char** maxn( char* string[], int len);

int main()
{
	using namespace std;
	int int_array[6] = { 1, 2, 3, 4, 5, 6 };
	double double_array[4] = { 1.1, 2.1, 3.1, 4.1 };
	char* strings[3] = { "apple", "pear", "banana" };
	cout << maxn( int_array, 6 ) << endl;
	cout << maxn( double_array, 4 ) << endl;
	cout << maxn( strings, 3 ) << endl;
	return 0;
}

template<typename Any>
Any maxn( Any* item, int len)
{
	Any max = item[0];
	for ( int i = 1 ; i < len ; ++i )
	{
		if ( item[i] > max )
		{
			max = item[i];
		}
	}
	return max;
}

char** maxn( char* string[], int len)
{
	char** max = string;
	int max_len = strlen(string[0]);
	for ( int i = 1; i < len ; ++i )
	{
		if (strlen(string[i]) > max_len)
		{
			max =  string + i;
		}
	}
	return max;
}
