#include<iostream>
#include<fstream>

int main()
{
	using namespace std;
	int count = 0;
	ifstream file;
	file.open("bin/test");
	file.get();
	while (!file.eof())
	{
		++count;
		file.get();
	}
	cout << count << endl;
	return 0;
}

