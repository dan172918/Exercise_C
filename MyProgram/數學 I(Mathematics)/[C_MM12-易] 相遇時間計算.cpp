#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	//M=distance
	double M,time=0;
	//V=speed
	double V=1-30*2.54/100.;
	cin>>M;
	while(M>0)
	{
		time++;
		M-=V;
	}
	cout<<time<<endl;
}


