#ifndef CD_H_
#define CD_H_

class Cd
{
private:
	char* performer;
	char* label;
	int selections;
	double playtime;
public:
	Cd(char* s1, char* s2, int n, double x);
	Cd(const Cd &d);
	Cd();
	virtual ~Cd();
	virtual void Report() const;
	Cd &operator=(const Cd &d);
};

class Classics : public Cd
{
private:
	char* prime;
public:
	Classics(char* pri, char* s1, char* s2, int n, double x);
	Classics(const Classics &c);
	Classics();
	virtual ~Classics();
	virtual void Report() const;
	Classics &operator=(const Classics &c);
};

#endif
