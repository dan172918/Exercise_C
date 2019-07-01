#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int N;
	cin>>N;
	cout<<"NT10="<<N/10<<endl;
	cout<<"NT5="<<N%10/5<<endl;
	cout<<"NT1="<<N%10%5<<endl;
}


