#include<iostream>
using namespace std;

int main(){
	int num,s,d;
	cin>>num;
	while(num--){
		cin>>s>>d;
		if(s-(s+d)/2==(s+d)/2-d && s-(s+d)/2>0 && (s+d)/2-d>0)
			cout<<(s+d)/2<<" "<<s-(s+d)/2<<endl;
		else
			cout<<"impossible"<<endl;
	}
}
