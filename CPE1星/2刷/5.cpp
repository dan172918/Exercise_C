#include<iostream>
#include<cmath>
using namespace std;
int main(){
	string str;
	while(cin>>str && str!="0"){
		int a=0,b=0;
		for(int i=0;i<str.length();i++){
			if(i%2==0)
				a+=int(str[i]-'0');
			else
				b+=int(str[i]-'0');
		}
		if(abs(a-b)%11==0)
			cout<<str<<" is a multiple of 11."<<endl;
		else
			cout<<str<<" is not a multiple of 11."<<endl;

	}
}
