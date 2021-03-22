#include<iostream>
using namespace std;

int main(){
	int a,b;
	while(cin>>a>>b && (a!=0 && b!=0)){
		int count = 0,carry = 0;
		while(a!=0 || b!=0){
			if(a%10+b%10+carry>9){
				count++;
				carry=1;
			}
			else
				carry=0;
			a/=10;
			b/=10;	
		}
		if(count){
			cout<<count;
			if(count==1)
				cout<<" carry operation."<<endl;
			else
				cout<<" carry operations."<<endl;
		}
		else
			cout<<"No carry operation."<<endl;
	}
}
