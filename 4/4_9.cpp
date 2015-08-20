#include<iostream>

struct CandyBear
{
	char* brand;
	double weight;
	int No_Cal;
};

int main()
{
	using namespace std;
	CandyBear *bears = new CandyBear [3];
	bears[0] = {"A", 1.0, 1} ;
	bears[1] = {"B", 2.0, 2} ;
	bears[2] = {"C", 3.0, 3} ;

	for (int i = 0; i < 3 ; ++i)
	{
		cout << i << endl;
		cout << bears[i].brand << endl;
		cout << bears[i].weight << endl;
		cout << bears[i].No_Cal << endl << endl;
	}
	return 0;
}
