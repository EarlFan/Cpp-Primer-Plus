#include<iostream>
#include<string>
#include<cstring>
using std::string;

class Person
{
private:
	static const int LIMIT = 25;
	string lname;
	char fname[LIMIT];
public:
	Person() 
	{
		lname = "";
		fname[0] = '\0';
	}
	Person(const string &ln, const char* fn = "Heyyou");
	void Show() const;
	void FormalShow() const;
};

int main()
{
	using namespace std;
	string ln;
	char fn[25]; 
	cout << "Please enter your first name: ";
	cin.getline(fn, 25);
	cout << "Please enter your last name: ";
	getline(cin, ln);
	Person user = Person(ln, fn);
	user.Show();
	user.FormalShow();
	return 0;
}

Person::Person(const string &ln, const char* fn)
{
	lname = ln;
	strcpy( fname, fn );
}

void Person::Show() const
{
	using std::cout;
	using std::endl;
	cout << fname << ' ' << lname << endl;
}

void Person::FormalShow() const
{
	using std::cout;
	using std::endl;
	cout << lname << ',' << fname << endl;
}
	
