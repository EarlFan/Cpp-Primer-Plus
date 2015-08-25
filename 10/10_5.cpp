#include<iostream>

struct customer
{
	char fullname[35];
	double payment;
};

class Stack
{
private:
	enum {MAX = 10};
	customer items[MAX];
	int top;
	double total;
public:
	Stack() { top = 0; total = 0; };
	bool push(const customer &a);
	bool pop(customer &a);
};

int main()
{
	using namespace std;
	Stack stack;
	customer a;
	cout << "Please enter the fullname of the customer: ";
	cin.getline(a.fullname, 35);
	cout << "Please enter the payment of " << a.fullname << " : ";
	cin >> a.payment;
	cin.get();
	while( stack.push(a) )
	{
		cout << "Please enter the fullname of the customer: ";
		cin.getline(a.fullname, 35);
		cout << "Please enter the payment of " << a.fullname << " : ";
		cin >> a.payment;
		cin.get();
	}
	cout << "The stack is full.\n";
	while( stack.pop(a) )
	{
		continue;
	}
	return 0;
}

bool Stack::push(const customer &a)
{
	items[ top ] = a;
	++top;
	if (top == 10)
	{
		return false;
	}
	return true;
}

bool Stack::pop(customer &a)
{
	if (top == 0)
	{
		return false;
	}
	a = items[top - 1];
	total += items[top - 1].payment;
	std::cout << total << std::endl;
	top --;
	return true;
}



