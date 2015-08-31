#include<iostream>
#include<cctype>
#include<cstring>
#include "string2.h"

int String::num_strings = 0;

String::String(const char* s)
{
	++num_strings;
	len = std::strlen(s);
	str = new char [len + 1];
	std::strcpy(str, s);
}

String::String()
{	
	++num_strings;
	len = 4;
	str = new char[1];
	str[0] = '\0';
}	

String::String(const String &s)
{
	++num_strings;
	len = s.len;
	str = new char[len + 1];
	std::strcpy(str, s.str);
}

String::~String()
{
	--num_strings;
	delete [] str;
}

String String::operator+(const String &st) const
{
	char temp[CINLIM];
	std::strcpy(temp, str);
	std::strcat(temp, st.str);
	return String(temp);
}
String String::operator+(const char* s) const
{
	char temp[CINLIM];
	std::strcpy(temp, str);
	std::strcat(temp, s);
	return String(temp);
}

String &String::operator=(const String &s)
{
	if (this == &s)
	{
		return *this;
	}
	delete [] str;
	len = s.len;
	str = new char[len + 1];
	std::strcpy(str, s.str);
	return *this;
}

String &String::operator=(const char* s)
{
	delete [] str;
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	return *this;
}

void String::stringlow()
{
	for ( int i = 0; i < len ; ++i )
	{	
		str[i] = std::tolower(str[i]);
	}
}

void String::stringup()
{
	for ( int i = 0; i < len ; ++i )
	{	
		str[i] = std::toupper(str[i]);
	}
}

int String::count(char ch) const
{
	int c = 0;
	for ( int i =0; i < len ; ++i )
	{
		if (str[i] == ch)
		{
			++c;
		}
	}
	return c;
}

char &String::operator[](int i)
{
		return str[i];
}

const char &String::operator[](int i) const
{
		return str[i];
}

bool operator<(const String &st1, const String &st2)
{
	return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String &st1, const String &st2)
{
	return (std::strcmp(st1.str, st2.str) > 0);
}


bool operator==(const String &st1, const String &st2)
{
	return (std::strcmp(st1.str, st2.str) == 0);
}

std::ostream &operator<<(std::ostream &os, const String &st)
{
	os << st.str;
	return os;
}

std::istream &operator>>(std::istream &is, String &st)
{
	char temp[String::CINLIM];
	is.get(temp, String::CINLIM);
	if (is)
	{
		st = temp;
	}
	while (is && is.get() != '\n')
	{
		continue;
	}
	return is;
}

String operator+(const char* s, const String &st)
{	
	char temp[String::CINLIM];
	std::strcpy(temp, s);
	std::strcat(temp, st.str);
	return String(temp);
}
