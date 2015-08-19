#include<iostream>
#define LEN 20

int main()
{
	using namespace std;

	char  f_name[LEN], l_name[LEN], grade[2];
	int age;
	cout << "What is your first name? ";
	cin.getline(f_name, LEN);
	cout << "What is your last name? ";
	cin.getline(l_name, LEN);
	cout << "What letter grade do you deserve? ";
	cin.getline(grade, 2);
	cout << "What is your age? ";
	cin >> age;

	cout << "Name: " << l_name << ", " << f_name << endl;
	cout << "Grade: " << char(int(grade[0]) + 1) << endl;
	cout << "Age: " << age << endl;
	return 0;
}
	
