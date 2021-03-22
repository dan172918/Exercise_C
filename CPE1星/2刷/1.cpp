#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
	int num,num1;
	cin>>num;
	while(num--){
		cin>>num1;
		int arr[num1];
		for(int i=0;i<num1;i++)
			cin>>arr[i];
		sort(arr,arr+num1);
		int tmp,total=0;
		if(num1%2==1)
			tmp = arr[num1/2];
		else
			tmp = abs((arr[num1/2]+arr[num1/2-1])/2);
		for(int i=0;i<num1;i++)
			total+=abs(arr[i]-tmp);
		cout<<total<<endl;
	}
} 
