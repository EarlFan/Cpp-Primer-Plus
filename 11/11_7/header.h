#ifndef COMPLEX_H_
#define COMPLEX_H_
#include<iostream>

class comp
{
private:
	double real;
	double img;
public:
	comp();
	~comp();
	comp( double a, double b );
	comp operator+(const comp &n) const;
	comp operator-(const comp &n) const;
	comp operator*(const comp &n) const;
	comp operator*(double n) const;
	friend comp operator*(double n, const comp &i);
	friend comp operator~(const comp &i);
	friend std::ostream &operator<<(std::ostream &os, const comp &n);
	friend std::istream &operator>>(std::istream &is, comp &n);
};

#endif

