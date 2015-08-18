#include<iostream>

const int FEET = 12;
const double METRE = 0.0254;
const double KG = 2.2;

double BMI(double, double);

int main()
{
	using namespace std;
	int feet;
	double inch, pt, metre;
	cout << "Enter the feet component of your height: ";
	cin >> feet;
	cout << "Enter the inch component of your height: ";
	cin >> inch;
	cout << "Enter your weight in Pound: ";
	cin >> pt;
	
	double kg;
	kg  = pt / KG;
	inch += FEET * feet;
	metre = inch * METRE;
	cout << "Your BMI is :" << BMI(metre, kg) << endl;
	return 0;
}

double BMI(double height, double weight)
{
	return weight / (height * height);
}


