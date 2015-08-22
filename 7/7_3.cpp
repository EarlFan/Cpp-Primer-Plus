#include<iostream>

struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void print_box( const box );
void cal_vol( box* );

int main()
{
	using namespace std;
	box BOX;
	cout << "Enter the maker\n";
	cin.getline(BOX.maker, 40);
	cout << "Enter the height\n";
	cin >> BOX.height;
	cout << "Enter the width\n";
	cin >> BOX.width;
	cout << "Enter the length\n";
	cin >> BOX.length;

	cal_vol ( &BOX );
	print_box( BOX );
	return 0;
}

void print_box( const box BOX )
{
	using namespace std;
	cout << BOX.maker << endl;
	cout << BOX.height << 'x';
	cout << BOX.width << 'x';
	cout << BOX.length << " = ";
	cout << BOX.volume << endl;
}

void cal_vol( box* BOX)
{
	BOX->volume = BOX->height * BOX->length * BOX->width;
}
