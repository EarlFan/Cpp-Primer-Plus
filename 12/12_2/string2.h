#include<iostream>
using std::istream;
using std::ostream;

#ifndef STRING2_H_
#define STRING2_H_

class String
{
private:
	char* str;
	int len;
	static int num_strings;
	static const int CINLIM = 80;
public:
	String(const char* s);
	String();
	String(const String &s);
	~String();
	int length() const { return len; };

	String operator+(const String &st) const;
	String operator+(const char* s) const;
	String &operator=(const String &s);
	String &operator=(const char* s);
	void stringlow();
	void stringup();
	int count(char ch) const;
	char &operator[](int i);
	const char &operator[](int i) const;

	friend bool operator<(const String &st1, const String &st2);
	friend bool operator>(const String &st1, const String &st2);
	friend bool operator==(const String &st1, const String &st2);
	friend ostream &operator<<(ostream &os, const String &st);
	friend istream &operator>>(istream &is, String &st);
	friend String operator+(const char* s, const String &st);

	static int HowMany();
};
#endif
