#include<iostream>
using namespace std;
int main(){
	int num,a,b;
	cin>>num;
	for(int i=1;i<=num;i++){
		cout<<"Case "<<i<<": ";
		cin>>a>>b;
		int total = 0;
		while(a<=b){
			if(a%2==1){
				total+=a;
				a+=2;
			}
			else
				a++;
		}
		cout<<total<<endl;
	}
}
