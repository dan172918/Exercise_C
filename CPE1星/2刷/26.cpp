#include<iostream>
using namespace std;

int main(){
	int arr[39]={1,2},count,num;
	for(int i=2;i<39;i++)
		arr[i]=arr[i-1]+arr[i-2];
	cin>>count;
	while(count--){
		cin>>num;
		cout<<num<<" = ";
		bool isStart = false;
		for(int i=38;i>=0;i--){
			if(arr[i]<=num){
				cout<<num/arr[i];
				num%=arr[i];
				isStart = true;
			}
			else if(isStart){
				cout<<0;
			}	
		}
		cout<<" (fib)"<<endl;
	}
} 
