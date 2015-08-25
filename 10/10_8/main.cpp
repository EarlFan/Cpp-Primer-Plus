#include<iostream>
#include "list.h"

int main()
{
	using namespace std;
	List list;
	double n;
	cout << "Enter a number to add to the list\n";
	cin >> n;
	while (list.add(n))
	{
		cout << "Enter a number to add to the list\n";
		cin >> n;
	}
	list.visit(&print);
	list.visit(&twice);
	list.visit(&print);
	list.visit(&zero);
	list.visit(&print);
	return 0;
}
		
	

