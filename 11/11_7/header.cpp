#include "header.h"

comp::comp()
{
	real = img = 0.0;
}
comp::~comp()
{
}

comp::comp( double a, double b)
{
	real = a;
	img = b;
}

comp comp::operator+( const comp &n ) const
{
	return comp ( real + n.real, img + n.img );
}

comp comp::operator-( const comp &n ) const
{
	return comp ( real - n.real, img - n.img );
}

comp comp::operator*( const comp &n ) const
{
	return comp ( real * n.real - img * n.img, real * n.img + img * n.real );
}

comp comp::operator*( double n) const
{
	return comp ( real * n, img * n );
}

comp operator*( double n, const comp &i )
{
	return i * n;
}

comp operator~( const comp &i )
{
	return comp ( i.real, -i.img );
}

std::ostream &operator<<( std::ostream &os, const comp &i )
{
	os << "(" << i.real << "," << i.img <<"i)";
	return os;
}

std::istream &operator>>( std::istream &is, comp &i )
{
	using std::cout;
	cout << "real: ";
	is >> i.real;
	cout << "imaginary: ";
	is >> i.img;
	return is;
}
