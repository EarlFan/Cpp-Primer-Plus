#include<iostream>

long double p(int, int);

int main()
{
	std::cout << p(47, 5) * p(27, 1) << std::endl;
	return 0;
}

long double p(int total, int pick)
{
	long double prob = 1;
	for ( double i = pick, j = total ; i > 0 ; --i, --j)
	{
		prob *= i/j;
	}
	return prob;
}

	
