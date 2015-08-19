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
	CandyBear snack = 
	{
		"Mocha Munch",
		2.3,
		350
	};

	cout << "snack\n";
	cout << "\t" << snack.brand << endl;
	cout << "\t" << snack.weight << endl;
	cout << "\t" << snack.No_Cal << endl;
	return 0;

}
	
