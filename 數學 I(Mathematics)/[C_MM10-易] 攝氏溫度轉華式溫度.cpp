#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	double C,F;
	cin>>C;
	F=C*9/5.+32;
	cout<<fixed<<setprecision(1)<<floor(F*10+0.5)/10<<endl;
}


