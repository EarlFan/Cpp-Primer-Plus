#include "header.h"

int main()
{	using namespace std;
	comp a(2.0, 3.0);
	comp c;
	cout << "Please enter a complex number, q to quit:\n";
	while (cin>>c)
	{
		cout << "c is " << c << endl;
		cout << "complex conjugate is " << ~c << endl;
		cout << "a is " << a << endl;
		cout << "a + c = " << a + c << endl;
		cout << "a - c = " << a - c << endl;
		cout << "a * c = " << a * c << endl;
		cout << "2 * c = " << 2 * c << endl;
		cout << "Please enter a complex number, q to quit:\n";
	}
	cout << "End\n";
	return 0;
}

