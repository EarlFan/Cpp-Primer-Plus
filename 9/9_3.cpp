#include<iostream>
#include<cstring>
#include<new>

struct chaff
{
	char dross[20];
	int slag;
};

char buffer[60];

int main()
{	
	using namespace std;
	chaff* items =  new (buffer) chaff[2];
	for ( int i = 0; i < 2; ++i)
	{
		cout << "Please enter the dross of chaff #" << i + 1 << ":\n";
		cin.getline(items[i].dross, 20);
		cout << "Please enter the slag of chaff #" << i + 1 << ":\n";
		cin >> items[i].slag;
		cin.get();
	}

	
	for ( int i = 0; i < 2; ++i)
	{
		cout << items[i].dross << endl;
		cout << items[i].slag << endl;
	}
	return 0;
}

