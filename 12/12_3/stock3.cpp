#include<iostream>
#include<cstring>
#include "stock3.h"

Stock::Stock()
{
	company = new char [1];
	company[0] = '\0';
	share = 0;
	share_val = total_val = 0.0;
}

Stock::Stock(const char* co, int n, double pr)
{
	int temp = std::strlen(co) + 1;
	company = new char [temp];
	std::strcpy(company, co);
	share = n;
	share_val = pr;
	set_tot();
}

Stock::~Stock()
{
	delete [] company;
}

void Stock::buy(int num, double price)
{
	if ( num < 0 )
	{
		std::cerr << "Number of shares purchased can't be negative. Transaction is aborted.\n";
	}

	else
	{
		share += num;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(int num, double price)
{
	if ( num < 0 )
	{
		std::cerr << "Number of shares purchased can't be negative. Transaction is aborted.\n";
	}
	else if ( num > share)
	{
		std::cerr << "You can't sell more than you have! Transaction is aborted.\n";
	}
	else
	{
		share -= num;
		share_val = price;
		set_tot();
	}
}

void Stock::update(double price)
{
	share_val = price;
	set_tot();
}

const Stock &Stock::topval(const Stock &s) const
{
	if (s.total_val > total_val)
	{
		return s;
	}
	else
	{
		return *this;
	}
}

std::ostream &operator<<(std::ostream &os, const Stock &s)
{
	os << "Company: " << s.company << '\n';
	os << "Share: " << s.share << '\n';
	os << "Price: " << s.share_val << '\n';
	os << "Total Value: " << s.total_val << '\n';
	return os;
}

