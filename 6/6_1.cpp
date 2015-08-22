#include<iostream>
#include<cctype>

int main()
{
	using namespace std;
	char ch;
	while ( cin.get(ch) && ch != '@')
	{
		if (isalpha(ch))
		{
			if (islower(ch))
			{
				cout <<(char) toupper(ch) ;
			}
			else
			{
				cout <<(char) tolower(ch) ;
			}
		}
	}
	cout << endl;
	return 0;
}

