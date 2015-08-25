#include<iostream>
#include<cstring>
#define Len 40

class golf
{
private:
	char fullname[Len];
	int handicap;
public:
	golf() { strcpy(fullname, "") ; handicap = 0; };
	golf(const char* name, int hc);
	bool setgolf();
	void Handicap(int hc);
	void show() const;
};

int main()
{
	using namespace std;
	golf golfs[5];
	int i;
	char ch;
	for ( i = 0 ; i < 5 ; ++i )
	{
		if ( ! golfs[i].setgolf() )
		{
			break;
		}
	}
	for ( int n = 0 ; n < i ; ++n )
	{	
		golfs[n].show();
		cout << "Enter y to change the handicap: ";
		cin >> ch;
		cin.get();
		if ( ch == 'y' )
		{
			int hc;
			cout << "Please enter the new handicap:\n";
			cin >> hc;
			cin.get();
			golfs[n].Handicap( hc );
			golfs[n].show();
		}
	}
	return 0;
}

inline golf::golf(const char* name, int hc)
{
	strcpy(fullname, name);
	handicap = hc;
}

bool golf::setgolf()
{
	using namespace std;
	cout << "Please enter the fullname: \n";
	cin.getline(fullname, Len);
	if (fullname[0] == '\0')
	{
		return false;
	}
	cout << "Please enter the handicap: ";
	cin >> handicap;
	cin.get();
	return true;
}

inline void golf::Handicap(int hc)
{
	handicap = hc;
}

inline void golf::show() const
{
	using namespace std;
	cout << "Fullname: " << fullname << endl;
	cout << "Handicap: " << handicap << endl;
}






		
