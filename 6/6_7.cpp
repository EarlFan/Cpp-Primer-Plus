#include<iostream>
#include<cstring>
#include<cctype>
#define LEN 10

int main()
{
	using namespace std;
	char word[LEN];
	int count = 0;
	int count_v = 0;
	int count_c = 0;
	cin >> word;
	while (strcmp(word, "q"))
	{
		++count;
		switch(word[0])
		{
			case 'a': ++count_v; break;
			case 'e': ++count_v; break;
			case 'i': ++count_v; break;
			case 'o': ++count_v; break;
			case 'u': ++count_v; break;
			case 'A': ++count_v; break;
			case 'E': ++count_v; break;
			case 'I': ++count_v; break;
			case 'O': ++count_v; break;
			case 'U': ++count_v; break;
			default: 
			{
				if (isalpha(word[0]))
				{
					++count_c;
				}
			}
		};
		cin >> word;
	}
	cout << count_v << endl;
	cout << count_c << endl;
	cout << count - count_v - count_c << endl;
	return 0;
}



