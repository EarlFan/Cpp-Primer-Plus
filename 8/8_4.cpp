#include<iostream>
#include<cstring>
using namespace std;
struct stringy
	{
		char * str;
		int ct;
	};

inline void set(stringy &item, const char*);
void show(const stringy item, int n = 1);
void show( char* string, int n = 1 );

int main()
{
	stringy beany;
	char testing[] = "Reallity isn't what it used to be.";

	set(beany, testing);
	show(beany);
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");
	return 0;
}

void set(stringy &item, const char* string)
{
	item.ct = strlen(string);
	item.str = new char [item.ct];
	strcpy(item.str, string);
}

void show(const stringy item, int n)
{
	for ( int i = 0 ; i < n ; ++i)
	{
		cout << item.str << endl;
	}
}

void show( char* string, int n)
{
	for ( int i = 0 ; i < n ; ++i)
	{
		cout << string << endl;
	}
}

		
