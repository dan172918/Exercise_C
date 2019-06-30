#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cin>>n;
	cout<<fixed<<setprecision(1)<<floor(n*1.6*10+0.5)/10.<<endl;
}


