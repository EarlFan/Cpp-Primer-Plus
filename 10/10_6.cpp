#include<iostream>

class Move
{
private:
	double x;
	double y;
public:
	Move(double a = 0, double b = 0);
	void showmove() const;
	Move add(const Move &m) const;
	void reset(double a = 0, double b = 0);
};

int main()
{
	Move a;
	Move b(2.0, 3.0);
	Move c = a.add(b);
	c.showmove();
	c.reset();
	c.showmove();
}

inline Move::Move(double a, double b)
{
	x = a;
	y = b;
}

inline void Move::showmove() const
{
	using std::cout;
	cout << x << '\n';
	cout << y << '\n';
}

inline Move Move::add(const Move &m) const
{
	double a = x + m.x;
	double b = y + m.y;
	Move temp(a, b);
	return temp;
}

inline void Move::reset(double a, double b)
{	x = a;
	y = b;
}
