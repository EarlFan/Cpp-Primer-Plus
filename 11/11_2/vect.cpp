#include<cmath>
#include "vect.h"

using std::sin;
using std::cos;
using std::atan2;
using std::cout;

namespace VECTOR
{
	const double Rad_to_deg = 57.2957795130823;
/*
	void Vector::set_mag()
	{	
		mag = sqrt(x * x + y * y);
	}

	void Vector::set_ang()
	{
		if ( x == 0.0 && y == 0.0 )
		{
			ang = 0.0;
		}

		else
		{
			ang = atan2(y, x);
		}
	}
*/
	double Vector::magval() const
	{
		return sqrt(x * x + y * y);
	}
	double Vector::angval() const
	{
		if ( x == 0.0 && y == 0.0 )
		{
			return 0.0;
		}
		return atan2(y, x);
	}
	void Vector::set_x()
	{
		x = magval() * cos(angval());
	}
	void Vector::set_y()
	{
		y = magval() * sin(angval());
	}

	Vector::Vector()
	{
		x = y = 0.0;
		mode = 'r';
	}
	Vector::Vector(double n1, double n2, char form)
	{
		mode = form;
		if ( form == 'r')
		{
			x = n1;
			y = n2;
		}
		else if ( form == 'p')
		{
			x = n1 * cos(n2);
			y = n1 * sin(n2);
		}
		else
		{
			cout << "Incorrect form\n";
			cout << "vector set to 0\n";
			x = y = 0.0;
			mode = 'r';
		}
	}
	void Vector::set(double n1, double n2, char form)
	{
		mode = form;
		if ( form == 'r')
		{
			x = n1;
			y = n2;
		}
		else if ( form == 'p')
		{
			x = n1 * cos(n2);
			y = n1 * sin(n2);
		}
		else
		{
			cout << "Incorrect form\n";
			cout << "vector set to 0\n";
			x = y = 0.0;
			mode = 'r';
		}
	}

	Vector::~Vector()
	{
	}
	void Vector::rect_mode()
	{
		mode = 'r';
	}
	void Vector::polar_mode()
	{
		mode = 'p';
	}

	Vector Vector::operator+(const Vector & b) const
	{
		return Vector(x + b.x, y + b.y);
	}
	Vector Vector::operator-(const Vector & b) const
	{
		return Vector(x - b.x, y - b.y);
	}
	Vector Vector::operator-() const
	{
		return Vector(-x, -y);
	}
	Vector Vector::operator*(double n) const
	{
		return Vector( n * x, n * y );
	}

	Vector operator*(double n, const Vector &a)
	{
		return a * n;
	}

	std::ofstream &operator<<(std::ofstream &of, const Vector &v)
	{	
		if (! of.is_open())
		{
			std::cout << "Error: File not open.\n";
			return of;
		}
		if (v.mode == 'r')
		{
			of << "(x,y) = (" << v.x << ", " << v.y << ")";
		}
		else if (v.mode == 'p')
		{
			of << "(m,a) = (" << v.magval() << ", " << v.angval() << ")";
		}
		else
		{
			of << "Invalid mode";
		}
		return of;
	}
	std::ostream &operator<<(std::ostream &os, const Vector &v)
	{	
		if (v.mode == 'r')
		{
			os << "(x,y) = (" << v.x << ", " << v.y << ")";
		}
		else if (v.mode == 'p')
		{
			os << "(m,a) = (" << v.magval() << ", " << v.angval() << ")";
		}
		else
		{
			os << "Invalid mode";
		}
		return os;
	}
}
		


