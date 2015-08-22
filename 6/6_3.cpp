#include<iostream>

bool select(char);

int main()
{
	using namespace std;
	char choice;

	cout << "Please select a course:\n";
	cout << "a) steak\tb) fish and chips\n";
	cout << "c) hamburger\td) pizza\n";
	cin >> choice;
	while (!select(choice))
	{
		cout << "Please enter a, b, c or d : ";
		cin >> choice;
	}
	return 0;
}

bool select(char choice)
{
	using namespace std;
	switch(choice)
	{
		case 'a' : { cout << "$10" << endl; return true; }
		case 'b' : { cout << "$12" << endl; return true; }
		case 'c' : { cout << "$8" << endl; return true; }
		case 'd' : { cout << "$6" << endl; return true; }
		default : { return false; }
	}
}
