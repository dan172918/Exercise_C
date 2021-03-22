#include<iostream>
#include<string>
using namespace std;

int main(){
	int num;
	string p;
	while(cin>>num&&num!=0){
		int arr[8];
		for(int i=1;i<8;i++)arr[i]=i;
		for(int i=0;i<num;i++){
			cin>>p;
			if(p[0]=='e'){
				swap(arr[1],arr[3]);
				swap(arr[3],arr[6]);
				swap(arr[6],arr[4]);
			}
			else if(p[0]=='w'){
				swap(arr[1],arr[4]);
				swap(arr[4],arr[6]);
				swap(arr[6],arr[3]);
			}
			else if(p[0]=='s'){
				swap(arr[1],arr[2]);
				swap(arr[2],arr[6]);
				swap(arr[6],arr[5]);
			}else{
				swap(arr[1],arr[5]);
				swap(arr[5],arr[6]);
				swap(arr[6],arr[2]);
			}
		}
		cout<<arr[1]<<endl;
	}
} 
