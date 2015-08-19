#include<iostream>
#include<string>

int main()
{
	using namespace std;
	string l_name, f_name;
	cout << "Enter your first name: ";
	cin >> f_name;
	cout << "Enter your last name: ";
	cin >> l_name;
	l_name += ", " + f_name;
	cout << "Here's the information in one string: ";
	cout << l_name << endl;
	return 0;
}
