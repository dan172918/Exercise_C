#include <iostream>
using namespace std;

int main()
{
	int fib[39]={1,2},n,num;
	
	for(int i=2;i<39;i++)
		fib[i]=fib[i-1]+fib[i-2];
	
	cin>>n;
	while(n--) 
	{
		cin>>num;
		cout<<num<<" = ";
		
		bool findMax = false;
		for(int i=38;i>=0;i--)				  
			if(num-fib[i]>=0)
			{
				cout<<"1";
				num=num-fib[i];
				findMax = true;
			}
			else if(findMax)
				cout<<"0";
		cout<<" (fib)"<<endl;
	}
}
