#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	int i;
	cin>>i;
	if(i>=31)
		cout<<"Value of more than 31"<<endl;
	else
	{
		cout<<(long long int)pow(2,i)<<endl;
	}
		
}


