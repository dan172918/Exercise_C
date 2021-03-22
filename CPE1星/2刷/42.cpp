#include<iostream>
using namespace std;

int main(){
	int num,n;
	cin>>num;
	while(num--){
		cin>>n;
		int arr[n],count=0;
		for(int i=0;i<n;i++)
			cin>>arr[i];
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++)
				if(arr[i]>arr[j]){
					swap(arr[i],arr[j]);
					count++;
				}
		} 
		cout<<"Optimal train swapping takes "<<count<<" swaps."<<endl;
	}
}
