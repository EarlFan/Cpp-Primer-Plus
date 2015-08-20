#include<iostream>
#include<cstring>

int main()
{
	using namespace std;
	int count = 0;
	cout << "Enter characters, stop by entering done: \n";
	char word[9999];
	cin >> word;
	while (strcmp(word, "done"))
	{
		cin >> word;
		++count;
	}
	cout << count << endl;
	return 0;
}

