#include<iostream>
using namespace std;

int main(){
	long long int s,d;
	while(cin>>s>>d){
		while(d-s>0){
			d-=s;
			s++;
		}
		cout<<s<<endl;
	}
}
