#include<iostream>
#define strsize 20

struct bop
{
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int preference;
};

bop member[3] = 
	{
		{ "Z Gu", "Mr Gu", "Der Teufel", 1 },
		{ "Foo Bar", "Bar Foo", "Someone", 0},
		{ "Jin Kela", "Kela Jin", "Shangdiago", 2}
	};

bool select(char);
void print_name();
void print_title();
void print_bop();
void print_pref();

int main()
{
	using namespace std;
	char ch;
	cout << "Enter your choice : ";
	cin >> ch;
	while( !select(ch) )
	{
		cin >> ch;
	}

	return 0;
}

bool select(char ch)
{
	using namespace std;
	switch(ch)
	{
		case 'a' : print_name(); cout << "Enter your next choice: "; return false;
		case 'b' : print_title(); cout << "Enter your next choice: "; return false;
		case 'c' : print_bop(); cout << "Enter your next choice: "; return false;
		case 'd' : print_pref(); cout << "Enter your next choice: "; return false;
		case 'q' : cout << "Bye!\n"; return true;
		default : cout << "Please enter a, b, c, d or q: "; return false;
	}
}

void print_name()
{
	using namespace std;
	for ( int i = 0 ; i < 3 ; ++i )
	{
		cout << member[i].fullname << endl;
	}
}

void print_title()
{
	using namespace std;
	for ( int i = 0 ; i < 3 ; ++i )
	{
		cout << member[i].title << endl;
	}
}

void print_bop()
{
	using namespace std;
	for ( int i = 0 ; i < 3 ; ++i )
	{
		cout << member[i].bopname << endl;
	}
}

void print_pref()
{
	using namespace std;
	for ( int i = 0 ; i < 3 ; ++i )
	{
		switch ( member[i].preference )
		{
			case 0 : cout << member[i].fullname << endl; break;
			case 1 : cout << member[i].title << endl; break;
			case 2 : cout << member[i].bopname << endl; break;
			default : cout << "ERROR" << endl;
		}
	}
}
