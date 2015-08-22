#include<iostream>
#define LEN 30

struct contributer
{
	char name[LEN];
	double amount;
};

int main()
{
	using namespace std;
	int len;
	bool grand;
	bool patron;
	cout << "Enter the number of contributers: ";
	cin >> len;
	contributer* list = new contributer [len];
	for ( int i = 0 ; i < len ; ++i )
	{
		cout << "Please enter the name of the contributer: ";
		cin.get();
		cin.getline(list[i].name, LEN);
		cout << "Please enter the amount he contributed: ";
		cin >> list[i].amount;
	}
	cout << "Grand Patrons:\n";
	for ( int i = 0 ; i < len ; ++i )
	{
		if (list[i].amount >= 10000)
		{
			grand = true;
			cout << list[i].name << endl;
			cout << list[i].amount << endl;
		}
	}
	if (!grand)
	{
		cout << "None\n";
	}
	cout << "Patrons:\n";
	for ( int i = 0 ; i < len ; ++i )
	{
		if (list[i].amount < 10000)
		{
			patron = true;
			cout << list[i].name << endl;
			cout << list[i].amount << endl;
		}
	}
	if (!patron)
	{
		cout << "None\n";
	}
	return 0;
}



