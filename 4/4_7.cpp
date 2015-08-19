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
	order pizza;
	cout << "Please enter the name of company:\n";
	cin.getline(pizza.name, LEN);
	cout << "Please enter diameter of the pizza: ";
	cin >> pizza.diameter;
	cout << "Please enter the weight of the pizza: ";
	cin >> pizza.weight;
	
	cout << "Could you please confirm:\n";
	cout << "\tPizza Company: " << pizza.name << endl;
	cout << "\tPizza Diameter: " << pizza.diameter << endl;
	cout << "\tPizza Weight: " << pizza.weight << endl;
	return 0;
}
