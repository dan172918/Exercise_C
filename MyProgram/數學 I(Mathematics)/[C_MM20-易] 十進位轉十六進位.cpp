#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int n;
	char hex[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	cin>>n;
	while(true)
	{
		if(n>=16)
			cout<<hex[n/16];
		else
		{
			cout<<hex[n]<<endl;
			break;
		}
		n=n%16;
	}
}


