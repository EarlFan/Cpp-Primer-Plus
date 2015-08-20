#include<iostream>
#define LEN 20

struct order 
{
	char name[LEN];
	double diameter;
	double weight;
};

int main()
{
	using namespace std;
	order* pizza = new order;
	cout << "Diameter: \n";
	cin >> pizza->diameter;
	cin.get();
	cout << "Name: \n";
	cin.getline(pizza->name, LEN);
	cout << "Weight: \n";
	cin >> pizza->weight;

	cout << pizza->name << endl;
	cout << pizza->diameter << endl;
	cout << pizza->weight << endl;
	return 0;
}

