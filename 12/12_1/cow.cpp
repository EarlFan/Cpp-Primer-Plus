#include "cow.h"
#include<iostream>
#include<cstring>

Cow::Cow()
{
	std::strcpy(name, "Default");
	hobby = new char [7];
	std::strcpy(hobby, "Default");
	weight = 0.0;
}

Cow::Cow(const char* nm, const char* ho, double wt)
{
	std::strcpy(name, nm);
	int len = std::strlen(ho);
	hobby = new char [len + 1];
	std::strcpy(hobby, ho);
	weight = wt;
}

Cow::Cow(const Cow &c)
{
	std::strcpy(name, c.name);
	int len = std::strlen(c.hobby);
	hobby = new char [len + 1];
	std::strcpy(hobby, c.hobby);
	weight = c.weight;
}

Cow::~Cow()
{
	delete [] hobby;
}

Cow &Cow::operator=(const Cow &c)
{
	if (this == &c)
	{
		return *this;
	}
	std::strcpy(name, c.name);
	delete [] hobby;
	int len  = std::strlen(c.hobby);
	hobby = new char [len + 1];
	std::strcpy(hobby, c.hobby);
	weight = c.weight;
	return *this;
}

void Cow::ShowCow() const
{
	std::cout << "Name: " << name << '\n';
	std::cout << "Hobby: " << hobby << '\n';
	std::cout << "Weight: " << weight << '\n';
}


	
	

