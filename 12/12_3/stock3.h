#include<iostream>
#ifndef STOCK3_H_
#define STOCK3_H_

class Stock
{
private:
	char* company;
	int share;
	double share_val;
	double total_val;
	void set_tot() { total_val = share * share_val; }
public:
	Stock();
	Stock(const char* co, int n = 0, double pr =0.0);
	~Stock();
	void buy(int num, double price);
	void sell(int num, double price);
	void update(double price);
	const Stock &topval(const Stock &s) const;
	friend std::ostream &operator<<(std::ostream &os, const Stock &s);
};

#endif
