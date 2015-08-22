#include<iostream>
#define SLEN 30

struct student
{
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

int getinfo(student*, int);
void display1(student);
void display2(const student*);
void display3(const student*, int);

int main()
{
	using namespace std;
	cout << "Enter class size: ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;

	student * ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete [] ptr_stu;
	cout << "Done.\n";
	return 0;
}

int getinfo(student* ptr_stu, int n)
{
	using namespace std;

	int i;
	for ( i = 0 ; i < n ; ++i )
	{
		cout << "Student #" << i + 1 << ": \n";
		cout << "Name: ";
		if (! cin.getline((ptr_stu + i)->fullname, SLEN))
		{
			break;
		}
		cout << "Hobby: ";
		cin.getline( (ptr_stu + i)->hobby, SLEN);
		cout << "OOPLevel: ";
		cin >> (ptr_stu + i)->ooplevel;
		cin.get();
	}
	return i;
}

void display1(student a)
{
	using namespace std;
	cout << a.fullname << endl;
	cout << a.hobby << endl;
	cout << a.ooplevel << endl;
}

void display2(const student* a)
{
	using namespace std;
	cout << a->fullname << endl;
	cout << a->hobby << endl;
	cout << a->ooplevel << endl;
}

void display3(const student* a, int n)
{
	using namespace std;
	for ( int i = 0 ; i < n ; ++i )
	{
		cout << (a + i)->fullname << endl;
		cout << (a + i)->hobby << endl;
		cout << (a + i)->ooplevel << endl;
	}
}
