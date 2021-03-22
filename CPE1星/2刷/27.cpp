#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){
	int num,n;
	cin>>num;
	while(num--){
		cin>>n;
		int b1=n,b2,total1=0,total2=0;
		stringstream ss;
		ss<<hex<<to_string(n);
		ss>>b2;
		cout<<b2<<endl;
		while(b1!=0){
			if(b1&1)
				total1++;
			b1/=2;
		}
		while(b2!=0){
			if(b2&1)
				total2++;
			b2/=2;
		}
		cout<<total1<<" "<<total2<<endl; 
	}
}
