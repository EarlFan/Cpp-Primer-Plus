#include "stonewt.h"

int main()
{
	using namespace std;
	Stonewt a(10);
	Stonewt b(2, 10);
	Stonewt c;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << a + b << endl;
	cout << b - a << endl;
	cout << a * 2 << endl;
	cout << 2 * a << endl;
	return 0;
}
