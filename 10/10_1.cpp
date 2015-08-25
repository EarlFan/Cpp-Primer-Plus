#include<iostream>
#include<cstring>

class account
{
 private:
 	char Name[40];
	char Num[25];
	double Balance;
 public:
 	account();
	account(const char* name, const char* num, double balance = 0.0);
	void show() const;
	void deposit(double val);
	void withdraw(double val);
};

int main()
{	
	account Gu = account("Zhengyang Gu", "1234567890");
	Gu.show();
	Gu.deposit(1000.00);
	Gu.show();
	Gu.withdraw(20.00);
	Gu.show();
	return 0;
}

account::account(const char* name, const char* num, double balance)
{
	strcpy(Name, name);
	strcpy(Num, num);
	Balance = balance;
}

void account::show() const
{
	using std::cout;
	using std::endl;
	cout << "Name: " << Name << endl;
	cout << "Account No.: " << Num << endl;
	cout << "Balance: " << Balance << endl;
}

inline void account::deposit(double val)
{
	Balance += val;
}

inline void account::withdraw(double val)
{
	Balance -= val;
}
