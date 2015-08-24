#ifndef GOLF_H
#define GOLF_H
#include<iostream>
#define Len 30
struct golf
{
	char fullname[Len];
	int handicap;
};

void setgolf(golf &g, const char* name, int hc);
bool setgolf(golf &g);
void handicap(golf &g, int hc);
void showgolf(const golf &g);
#endif
