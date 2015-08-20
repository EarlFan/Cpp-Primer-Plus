#include<iostream>
#include<string>

int main()
{
	using namespace std;
	cout << "Enter words, end with done.\n";
	string word;
	cin >> word;
	int count = 0;
	while (word != "done")
	{
		++count;
		cin >> word;
	}
	cout << count << endl;
	return 0;
}
