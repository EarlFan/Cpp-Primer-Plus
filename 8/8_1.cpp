#include<iostream>

int n;

void print_n(char* string, int i = 0);

int main()
{
	char string[] = "Hello World!";
	print_n( string );
	std::cout << std::endl;	
	print_n( string, 1);
	std::cout << std::endl;	
	print_n( string, -1);
	return 0;
}

void print_n(char* string, int i)
{
	using namespace std;
	if ( i == 0 )
	{
		cout << string << endl;
	}
	else
	{
		for (int j = 0 ; j < n ; ++j)
		{
			cout << string << endl;
		}
	}
	++n;
}
