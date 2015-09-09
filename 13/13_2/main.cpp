#include<iostream>
#include "cd.h"

using namespace std;

void Bravo(const Cd &d);

int main()
{
	Cd c1("Beatles", "Capitol", 14, 35.5);
	Classics c2 = Classics("Piano Sonata in B flat, Fantasia in C", "Alfred Brendel", "Philips", 2, 57.17);
	Cd *pcd = &c1;

	cout << "Directly:\n";
	c1.Report();
	c2.Report();

	cout << "Pointer:\n";
	pcd->Report();
	pcd = &c2;
	pcd->Report();

	cout << "Reference:\n";
	Bravo(c1);
	Bravo(c2);

	cout << "Assignment:\n";
	Classics copy;
	copy = c2;
	copy.Report();

	return 0;
}

void Bravo(const Cd &disk)
{
	disk.Report();
}

