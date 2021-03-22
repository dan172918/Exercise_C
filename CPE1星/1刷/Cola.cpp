#include<iostream>
using namespace std;

int main(){
	int num;
	while(cin>>num){
		int count=num;
		while(num!=1){
			count+=num/3;
			num=num/3+num%3;
			if(num==2){
				count++;
				break;
			}
		}
		cout<<count<<endl;
	}
} 
