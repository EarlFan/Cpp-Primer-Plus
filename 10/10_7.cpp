#include<iostream>
#include<cstring>

class Plorg
{
private:
	char name[19];
	int CI;
public:
	Plorg(char str[] = "Plorga", int ci = 50);
	void set_ci(int ci);
	void report() const;
};

int main()
{	
	Plorg a;
	a.report();
	a.set_ci(15);
	a.report();
	return 0;
}

inline Plorg::Plorg(char str[], int ci)
{
	strcpy(name, str);
	CI = ci;
}

inline void Plorg::set_ci(int ci)
{
	CI = ci;
}

inline void Plorg::report() const
{
	using namespace std;
	cout << name << endl;
	cout << CI << endl;
}
