#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	const double PI = 3.14159265358979323;
	double r = 0, area = 0;
	cin>>r;
	area = PI*r*r;
	cout<<setiosflags(ios::fixed)<<setprecision(7)<<area;
	return 0;
} 
