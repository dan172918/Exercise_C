#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int minute;
	cin>>minute;
	if(minute<=800)
		cout<<fixed<<setprecision(1)<<minute*0.9<<endl;
	if(minute>800&&minute<1500)
		cout<<fixed<<setprecision(1)<<minute*0.9*0.9<<endl;
	if(minute>=1500)
		cout<<fixed<<setprecision(1)<<minute*0.9*0.79<<endl;
}


