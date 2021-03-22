#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	unsigned long long int n,m;
	while(cin>>n>>m)
		cout<<((n>m)?n-m:m-n)<<endl;
}
