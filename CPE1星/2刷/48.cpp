#include<iostream>
using namespace std;

int main(){
	int num;
	while(cin>>num){
		int total=num;
		while(num>2){
			total+=num/3;
			num=num/3+num%3;
		}
		if(num==2)
			cout<<++total<<endl;
		else
			cout<<total<<endl;
	}
} 
