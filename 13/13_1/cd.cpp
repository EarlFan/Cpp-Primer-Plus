#include<iostream>
#include<cstring>
#include "cd.h"

Cd::Cd(char* s1, char* s2, int n, double x)
{
	std::strcpy(performer, s1);
	std::strcpy(label, s2);
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd &d)
{
	std::strcpy(performer, d.performer);
	std::strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}

Cd::Cd()
{
	performer[0] = label[0] = '\0';
	playtime = selections = 0;
}

Cd &Cd::operator=(const Cd &d)
{
	std::strcpy(performer, d.performer);
	std::strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}
	

Cd::~Cd()
{
}

void Cd::Report() const
{
	using std::cout ;
	using std::endl ;
	cout << "Performer: " << performer << endl;
	cout << "Label: " << label << endl;
	cout << "Selections: " << selections << endl;
	cout << "playtime: " << playtime << endl;
}

Classics::Classics(char* pr, char* s1, char* s2, int n, double x) : Cd(s1, s2, n, x)
{
	std::strcpy(prime, pr);
}

Classics::Classics() : Cd()
{
	prime[0] = '\0';
}

Classics::Classics(const Classics &c) : Cd(c)
{
	std::strcpy(prime, c.prime);
}

Classics::~Classics()
{
}

void Classics::Report() const
{
	std::cout << "Primary Work: " << prime << std::endl;
	Cd::Report();
}

Classics &Classics::operator=(const Classics &c)
{
	if (this == &c)
	{
		return *this;
	}
	Cd::operator=(c);
	std::strcpy(prime, c.prime);
	return *this;
}
