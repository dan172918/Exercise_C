#include<iostream>
using namespace std;

int main(){
	int num,day,pcount,party;
	cin>>num;
	while(num--){
		cin>>day>>pcount;
		int arr[day+1]={0},count=0;
		while(pcount--){
			cin>>party;
			for(int i=party;i<=day;i+=party){
				if(arr[i]!=1){
					arr[i]=1;
					count++;
				}
			}
		}
		for(int i=6;i<=day;i+=7){
			if(arr[i]==1)
				count--;
			if(arr[i+1]==1)
				count--;	
		}
		cout<<count<<endl;
	}
}
