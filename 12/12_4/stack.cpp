#include "stack.h"
#include<iostream>
using namespace std;

Stack::Stack(int n)
{
	size = n;
	pitems = new Item [n];
	top = 0;
}

Stack::Stack(const Stack &st)
{
	size = st.size;
	delete pitems;
	pitems = new Item [size];
	for ( int i = 0 ; i < size ; ++i )
	{
		pitems[i] = st.pitems[i];
	}
	top = st.top;
}

Stack::~Stack()
{
	delete pitems;
}

bool Stack::isempty() const
{
	return !top;
}

bool Stack::isfull() const
{
	return top == size;
}

bool Stack::push(const Item &item)
{
	if (top == size)
	{
		return false;
	}

	pitems[top++] = item;
	return true;
}

bool Stack::pop(Item &item)
{
	if (isempty())
	{
		return false;
	}

	item = pitems[--top];
	return true;
}

Stack &Stack::operator=(const Stack &st)
{
	size = st.size;
	delete pitems;
	pitems = new Item [size];
	for ( int i = 0 ; i < size ; ++i )
	{
		pitems[i] = st.pitems[i];
		cout << i << endl;
		cout << st.pitems[i] << endl;
		cout << pitems[i] << endl;
	}
	top = st.top;
	return *this;
}
	



