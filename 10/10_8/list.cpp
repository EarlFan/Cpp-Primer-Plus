#include "list.h"
#include<iostream>

bool List::add(double n)
{
	list[top] = n;
	++top; 
	if ( top == LEN )
	{
		return false;
	}
	return true;
}

bool List::is_full() const
{
	if ( top == LEN )
	{
		return true;
	}
	return false;
}

bool List::is_empty() const
{
	if ( top == 0 )
	{
		return true;
	}
	return false;
}

void List::visit(void (*pf)(double &))
{
	for (int i = 0; i < top; ++i)
	{
		pf(list[i]);
	}
}

void print(double &n)
{
	using std::cout;
	cout << n << '\n';
}

void zero(double &n)
{
	n = 0;
}

void twice(double &n)
{
	n += n;
}
