#include<iostream>
#include<iomanip>
#define kuti 10000000
#define lakh 100000
#define hajar 1000
#define shata 100
using namespace std;

void compute(long long int num){
	if(num/kuti>0){
		compute(num/kuti);
		cout<<" kuti";
		num%=kuti;
	}
	if(num/lakh>0){
		compute(num/lakh);
		cout<<" lakh";
		num%=lakh;
	}
	if(num/hajar>0){
		compute(num/hajar);
		cout<<" hajar";
		num%=hajar;
	}
	if(num/shata>0){
		compute(num/shata);
		cout<<" shata";
		num%=shata;
	}
	if(num>0)
		cout<<" "<<num;
}
int main()
{
	unsigned long long int number,count=0;
	
	while(cin>>number){
		++count;
		cout<<setw(4)<<count<<".";
		if(number == 0)
			cout<<" 0";
		else
			compute(number);
		cout<<endl; 
	}
}
