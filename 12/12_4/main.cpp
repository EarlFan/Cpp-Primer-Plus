#include<iostream>
#include "stack.h"

int main()
{
	using namespace std;
	unsigned int n;
	int i;
	Item temp;
	cout << "Please enter the number of items: " ;
	cin >> n;
	Stack stack(n);
	if (n)
	{	
		cout << "Please enter Item#1 : " ;
		cin >> temp;
		stack.push(temp);
	}
	for ( int i = 2; i <= n; ++i )
	{
		cout << "Please enter Item#" << i << " : " ;
		cin >> temp;
		stack.push(temp);
	}

	Stack stack1(stack);
	Stack stack2;
	stack2 = stack1;
	while(stack.pop(temp))
	{
		cout << temp << endl;
		stack1.pop(temp);
		cout << temp << endl;
		stack2.pop(temp);
		cout << temp << endl;
	}
	return 0;
}
	

