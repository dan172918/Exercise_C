#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int n1,n2;
	cin>>n1>>n2;
	cout<<n1<<"+"<<n2<<"="<<n1+n2<<endl;
	cout<<n1<<"*"<<n2<<"="<<n1*n2<<endl;
	cout<<n1<<"-"<<n2<<"="<<n1-n2<<endl;
	cout<<n1<<"/"<<n2<<"=";
	if(n1<0)
		if(n2>0)
			cout<<n1/n2-1<<"..."<<n2+n1%n2<<endl;
		else
			cout<<n1/n2+1<<"..."<<n1%n2-n2<<endl;
	else
		cout<<n1/n2<<"..."<<n1%n2<<endl;
}


