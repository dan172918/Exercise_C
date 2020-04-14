#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	double edge,area;
	cin>>edge;
	area=floor(edge*edge*10+0.5);
	cout<<fixed<<setprecision(1)<<area/10.<<endl;
}


