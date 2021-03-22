#include<iostream>
#include<iomanip>
using namespace std;

void bangla(long long int num){
	if(num/10000000>0){
		bangla(num/10000000);
		cout<<" kuti";
		num%=10000000;
	}
	if(num/100000>0){
		bangla(num/100000);
		cout<<" lakh";
		num%=100000;
	}
	if(num/1000>0){
		bangla(num/1000);
		cout<<" hajar";
		num%=1000;
	}
	if(num/100>0){
		bangla(num/100);
		cout<<" shata";
		num%=100;
	}
	if(num>0)
		cout<<" "<<num;
}

int main(){
	long long int num,count=1;
	while(cin>>num){
		cout<<setw(4)<<count<<".";
		if(num!=0)
			bangla(num);
		else
			cout<<" "<<num;
		cout<<endl;
		count++;
	}
}

