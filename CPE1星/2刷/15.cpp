#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int num;
	while(cin>>num){
		int arr[num],arr1[num-1];
		for(int i=0;i<num;i++){
			cin>>arr[i];
			if(i!=0)
				arr1[i-1]=arr[i]-arr[i-1];
		}
		sort(arr1,arr1+num-1);
		bool isjolly = true;
		if(arr1[num-2]<num || num==1){
			for(int i=1;i<num;i++){
				if(arr1[i-1]==arr1[i]){
					isjolly = false;
					break;
				}
			}
		}
		else
			isjolly = false;
		if(isjolly)
			cout<<"Jolly"<<endl;
		else
			cout<<"Not jolly"<<endl;
			
		
	}
}
