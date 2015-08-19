#include<iostream>
#include<cstring>
#define LEN 20

int main()
{
	using namespace std;
	char f_name[LEN], l_name[LEN];
	cout << "Enter your first name: ";
	cin >> f_name;
	cout << "Enter your last name: ";
	cin >> l_name;
	strcat(l_name, ", ");
	strcat(l_name, f_name);
	cout << "Here's is the information in a single string ";
	cout << l_name << endl;
	return 0;
}
