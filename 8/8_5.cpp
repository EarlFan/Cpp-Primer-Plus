#include<iostream>

template <typename Any>
Any max5( Any array[5] );

int main()
{
	int int_array[5] = { 1, 2, 3, 4, 5 };
	double double_array[5] = { 2.1, 3.1, 4.1, 5.1, 6.1 };
	std::cout << max5(int_array) << std::endl;
	std::cout << max5(double_array) << std::endl;
	return 0;
}

template <typename Any>
Any max5( Any array[5] )
{
	Any max = array[0];
	for ( int i = 1; i < 5; ++i )
	{
		if ( array[i] > max)
		{
			max = array[i];
		}
	}
	return max;
}
		
