#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
	int num,tmp;
	string str;
	cin>>num;
	for(int i=1;i<=num;i++){
		cout<<"Test #"<<i<<": "; 
		cin>>str>>str>>tmp;
		int arrSize = pow(tmp,2),arr[arrSize];
		bool isSame = true;
		for(int j=0;j<arrSize;j++){
			cin>>arr[j];
			if(arr[j]<0)
				isSame = false;
		}	
		for(int j=0;j<arrSize/2+1;j++){
			if(arr[j]!=arr[arrSize-1-j]){
				isSame = false;
				break;
			}
		}
		if(isSame)
			cout<<"Symmetric."<<endl;
		else
			cout<<"Non-symmetric."<<endl;
		
	}
} 
