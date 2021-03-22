#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
#define PI acos(0.0)*2.0
int main()
{
	double s,a;
	string typ;
	while(cin>>s>>a>>typ){
		if(typ=="min")
			a/=60;
		cout<<fixed<<setprecision(6)<<(6440+s)*2*(a/360.0)*PI<<" ";
		cout<<(6440+s)*sin(a*PI/360.0)*2<<endl;
	}
}


