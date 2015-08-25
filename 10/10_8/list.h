#ifndef LIST_H
#define LIST_H
#define LEN 10

class List
{
private:
	double list[LEN];
	int top;
public:
	List() { top = 0; };
	bool add( double i );
	bool is_empty() const;
	bool is_full() const;
	void visit(void (*pf)(double &));
};
void print(double &n);
void zero(double &n);
void twice(double &n);

#endif
