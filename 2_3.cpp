#include<iostream>

void mice(int);
void run(int);

int main()
{
	mice(2);
	run(2);
	return 0;
}

void mice(int n)
{
	using namespace std;
	for (int c = 0 ; c < n ; ++c)
		cout << "Three blind mice\n";
}

void run(int n)
{
	using namespace std;
	for (int c = 0 ; c < n ; ++c)
		cout << "See how they run\n";
}
