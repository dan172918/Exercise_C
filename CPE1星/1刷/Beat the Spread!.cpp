#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int n,s,d;
	cin>>n;
	while(n--){
		cin>>s>>d;
		int x=(s+d)/2;
		if(s-x>=0 && s-x == -d+x)
			cout<<x<<" "<<s-x<<endl;
		else
			cout<<"impossible"<<endl;
	}
}


