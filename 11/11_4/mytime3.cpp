#include "mytime3.h"

Time::Time()
{
	hours = minutes = 0;
}

Time::Time(int h, int m)
{
	hours = h;
	minutes = m;
}

void Time::AddMin(int m)
{
	minutes += m;
	hours += minutes/60;
	minutes %= 60;
}

void Time::AddHr(int h)
{	
	hours += h;
}

void Time::Reset(int h, int m)
{
	hours = h;
	minutes = m;
}

Time operator+(const Time &t, const Time &m)
{
	Time sum;
	sum.minutes = m.minutes + t.minutes;
	sum.hours = m.hours + t.hours + sum.minutes / 60;
	sum.minutes %= 60;
	return sum;
}

Time operator-(const Time &t, const Time &m)
{
	Time diff;
	int tot1, tot2;
	tot1 = t.minutes + 60 * t.hours;
	tot2 = m.minutes + 60 * m.hours;
	diff.minutes = (tot2 - tot1) % 60;
	diff.hours = (tot2 - tot1) / 60;
	return diff;
}

Time operator*(const Time &t, double mult)
{
	Time result;
	long total_minutes = mult * ( t.minutes + 60 * t.hours );
	result.hours = total_minutes / 60;
	result.minutes = total_minutes % 60;
	return result;
}

Time operator*(double mult, const Time &t) 
{	
	return t * mult;
}
std::ostream &operator<<(std::ostream &os, const Time &t)
{
	os << t.hours << " hours, " << t.minutes << " minutes";
	return os;
}

