#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int s;
	cin>>s;
	cout<<s/60/60/24<<" days"<<endl;
	cout<<s/60/60%24<<" hours"<<endl;
	cout<<s/60%60<<" minutes"<<endl;
	cout<<s%60<<" seconds"<<endl;
}


