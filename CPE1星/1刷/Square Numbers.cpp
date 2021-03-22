#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;
	while(a!=0 && b!=0){
		cout<<floor(sqrt(b))-ceil(sqrt(a))+1<<endl;
		cin>>a>>b;
	} 
}


