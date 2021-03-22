#include<iostream>
using namespace std;

int main(){
	int testCase = 1,num;
	while(cin>>num){
		cout<<"Case #"<<testCase<<": ";
		int arr[num];
		bool isB2=true;
		for(int i=0;i<num;i++){
			cin>>arr[i];
			if(i>1&&arr[i-2]+arr[i-1]>arr[i])
				isB2=false;
		}
		if(isB2)
			cout<<"It is a B2-Sequence."<<endl;
		else
			cout<<"It is not a B2-Sequence."<<endl;
		cout<<endl;
		testCase++;
	}
}
