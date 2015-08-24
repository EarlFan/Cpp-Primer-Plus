#include "golf.h"
#include<cstring>

void setgolf(golf &g, const char* name, int hc)
{
	strcpy(g.fullname, name);
	g.handicap = hc;
}

bool setgolf(golf &g)
{
	using std::cout;
	using std::cin;

	char name[Len];
	int hc;
	cout << "Please enter the fulllname:\n";
	cin.getline(name, Len);
	if (name[0] == '\0')
	{
		return false;
	}
	cout << "Please enter the handicap:\n";
	cin >> hc;
	cin.get();
	setgolf(g, name, hc);
	return true;
}

void handicap(golf &g, int hc)
{
	g.handicap = hc;
}

void showgolf(const golf &g)
{
	using std::cout;
	using std::endl;
	cout << "Fullname : " << g.fullname << endl;
	cout << "Handicap : " << g.handicap << endl;
}
	

	
