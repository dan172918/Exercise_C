#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int a,s,d;
	cin>>a>>s>>d;
	cout<<"Trapezoid area:"<<fixed<<setprecision(1)<<(a+s)*d/2.<<endl;
}
