#include<iostream>
#define LEN 30

struct CandyBar  
	{
		char* brand;
		double weight;
		int cal;
	};

void assign( CandyBar &item, char* brand, double weight, int cal);
void show( const CandyBar &item);

int main()
{
	CandyBar item;
	assign ( item, "Mr Gu's", 18.18, 3300 );
	show( item );
	return 0;
}

void assign( CandyBar &item, char* brand, double weight, int cal)
{
	item.brand  = brand;
	item.weight = weight;
	item.cal = cal;
}

void show( const CandyBar &item)
{
	using namespace std;
	cout << item.brand << endl;
	cout << item.weight << endl;
	cout << item.cal << endl;
}
