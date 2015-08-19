#include<iostream>
#define LEN 20

struct CandyBear 
{
	char brand[LEN];
	double weight;
	int No_Cal;
};

int main()
{
	using namespace std;
	CandyBear bears[3] = 
	{
		{
			"A",
			1.8,
			100
		},
		{
			"B",
			2.7,
			200
		},
		{
			"C",
			3.6,
			300
		}
	};

	for (int i = 0; i < 3; ++i)
	{
		cout << "No. " << i << endl;
		cout << "\t" << bears[i].brand << endl;
		cout << "\t" << bears[i].weight << endl;
		cout << "\t" << bears[i].No_Cal << endl << endl;
	}
	return 0;
}
