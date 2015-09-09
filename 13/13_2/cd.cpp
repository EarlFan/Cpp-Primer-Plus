#include<iostream>
#include<cstring>
#include "cd.h"

Cd::Cd(char* s1, char* s2, int n, double x)
{
	int tmp = std::strlen(s1);
	performer = new char [tmp + 1];
	std::strcpy(performer, s1);
	tmp = std::strlen(s2);
	label = new char [tmp + 1];
	std::strcpy(label, s2);
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd &d)
{
	int tmp = std::strlen(d.performer);
	performer = new char [tmp + 1];
	std::strcpy(performer, d.performer);
	tmp = std::strlen(d.label);
	label = new char [tmp + 1];
	std::strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}

Cd::Cd()
{
	performer = label = NULL;
	playtime = selections = 0;
}

Cd &Cd::operator=(const Cd &d)
{
	delete performer;
	delete label;
	int tmp = std::strlen(d.performer);
	performer = new char [tmp + 1];
	std::strcpy(performer, d.performer);
	tmp = std::strlen(d.label);
	label = new char [tmp + 1];
	std::strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}
	

Cd::~Cd()
{
	delete performer;
	delete label;
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
	int tmp = std::strlen(pr);
	prime = new char [tmp + 1];
	std::strcpy(prime, pr);
}

Classics::Classics() : Cd()
{
	prime = NULL;
}

Classics::Classics(const Classics &c) : Cd(c)
{
	int tmp = std::strlen(c.prime);
	prime = new char [tmp + 1];
	std::strcpy(prime, c.prime);
}

Classics::~Classics()
{
	delete prime;
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
	delete prime;
	int tmp = std::strlen(c.prime);
	prime = new char [tmp + 1];
	std::strcpy(prime, c.prime);
	return *this;
}
