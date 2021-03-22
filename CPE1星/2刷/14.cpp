#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int num,M,D,arr[12]={10,21,28,4,9,6,11,8,5,10,7,12};
	string w[7]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	cin>>num;
	while(num--){
		cin>>M>>D;
		if(arr[M-1]>D){
			if(abs(arr[M-1]-D)%7==0)
				cout<<w[0]<<endl;	
			else
				cout<<w[7-abs(arr[M-1]-D)%7]<<endl;			
		}
		else
			cout<<w[abs(arr[M-1]-D)%7]<<endl;
	}
}
