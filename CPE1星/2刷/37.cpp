#include<iostream>
#include<iomanip>
#include<cmath>
#define pi acos(-1)
using namespace std;

int main(){
	double s,a;
	string str;
	cout<<fixed<<setprecision(6);
	while(cin>>s>>a>>str){
		s+=6440;
		if(str=="deg"){
			a=a*pi/180.0;
			cout<<2*s*pi*(a/(2*pi))<<" "<<2*(s*sin(a/2.0))<<endl;
		}
		else{
			a/=60;
			a=a*pi/180.0;
			cout<<2*s*pi*(a/(2*pi))<<" "<<2*(s*sin(a/2.0))<<endl;
		}
			
	}
} 
