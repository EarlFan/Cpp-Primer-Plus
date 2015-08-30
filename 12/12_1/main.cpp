#include<iostream>
#include "cow.h"

int main()
{
	using namespace std;
	Cow a;
	Cow b("B_COW", "NOTHING", 300);
	Cow c(b);
	a.ShowCow();
	b.ShowCow();
	c.ShowCow();
	a = b;
	a.ShowCow();
	return 0;
}

	
