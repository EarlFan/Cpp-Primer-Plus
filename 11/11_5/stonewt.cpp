#include "stonewt.h"

using std::cout;

Stonewt::Stonewt(double lbs)
{
	stone = int (lbs) / Lbs_per_stn;
	pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt()
{	
	stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt()
{
}

Stonewt Stonewt::operator+(const Stonewt &s) const
{
	return Stonewt( pounds + s.pounds );
}
	
Stonewt Stonewt::operator-(const Stonewt &s) const
{
	return Stonewt( pounds - s.pounds );
}
Stonewt Stonewt::operator*(double n) const
{
	return Stonewt( pounds * n );
}
std::ostream &operator<<(std::ostream &os, const Stonewt &s)
{
	os << s.stone << " stones, " << s.pds_left << " pounds/n";
}

Stonewt operator*(double n, const Stonewt &s)
{
	return s * n;
}
	
