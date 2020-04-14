#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int n,m,gcd=1;
	cin>>n>>m;
	for(int i=2;i<=n;i++)
	{
		if(n%i==0&&m%i==0)
			gcd=i;
	}
	cout<<gcd<<endl;
}


