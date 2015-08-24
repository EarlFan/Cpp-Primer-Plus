#include<iostream>
#include<string>
#define Arsize 10

using std::string;

void strcount(const string str);

int main()
{
	using std::cout;
	using std::cin;
	string input;

	cout << "Please enter a line:\n";
	getline(cin, input);
	while( input != "" )
	{
		strcount(input);
		cout << "Enter next line, empty to quit:\n";
		getline(cin, input);
	}
	cout << "Bye!\n";
	return 0;
}

void strcount(const string str)
{
	using std::cout;
	using std::cin;
	static int total = 0;
	int count = str.length();
	total += count;

	cout << "\"" << str << "\" contains ";
	cout << count << " characters\n";
	cout << total << " characters total\n";
}
	

		
