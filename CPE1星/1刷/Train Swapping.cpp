#include<iostream>
using namespace std;

int main(){
	int N,L;
	cin>>N;
	while(N--){
		cin>>L;
		int arr[L];
		for(int i=0;i<L;i++)
			cin>>arr[i];
		int swapCount = 0;
		for(int i=0;i<L-1;i++){
			for(int j=0;j<L-1-i;j++){
				if(arr[j]>arr[j+1]){
					swap(arr[j],arr[j+1]);
					swapCount++;
				}	
			}
		}
		cout<<"Optimal train swapping takes "<<swapCount<<" swaps."<<endl;
	}
} 
