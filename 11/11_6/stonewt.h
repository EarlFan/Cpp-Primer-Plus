#ifndef STONEWT_H_
#define STONEWT_H_
#include<iostream>

class Stonewt
{
private:
	enum {Lbs_per_stn = 14};
	int stone;
	double pds_left;
	double pounds;
public:
	Stonewt(double lbs);
	Stonewt(int stn, double lbs);
	Stonewt();
	~Stonewt();
	Stonewt operator+(const Stonewt &s) const;
	Stonewt operator-(const Stonewt &s) const;
	Stonewt operator*(double n) const;
	bool operator<(const Stonewt &s) const;
	bool operator>(const Stonewt &s) const;
	bool operator<=(const Stonewt &s) const;
	bool operator>=(const Stonewt &s) const;
	bool operator==(const Stonewt &s) const;
	bool operator!=(const Stonewt &s) const;
	friend std::ostream &operator<<(std::ostream &os, const Stonewt &s);
	friend Stonewt operator*(double n, const Stonewt &s);
};
#endif
