#include<iostream>
#include<fstream>
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
	fstream file;
	file.open("bin/input");
	file >> len;
	contributer* list = new contributer [len];
	for ( int i = 0 ; i < len ; ++i )
	{
		file.get();
		file.getline(list[i].name, LEN);
		file >> list[i].amount;
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



