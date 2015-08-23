#include<iostream>
#include<cstring>
#include<string>
#define LEN 30

const std::string & upper( std::string & str);

int main()
{
	using namespace std;
	string str;
	cout << "Please enter a string, q to quit:\n";
	cin >> str;
	while ( str != "q" )
	{
		cout << upper ( str )  << endl;
		cout << "Please enter a string, q to quit:\n";
		cin >> str;
	}
	return 0;
}

const std::string & upper( std::string & str)
{
	for ( int i = 0 ; str[i] != '\0' ; ++i )
	{
		str[i] = toupper(str[i]);
	}
	return str;
}
	

