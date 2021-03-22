#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
	vector<string> arr;
	string str;
	while(getline(cin,str)){
		if(str=="")
			break;
		arr.push_back(str);
	}
	int max=0,mark;
	for(int i=arr.size()-1;i>=0;i--){
		if(arr[i].length()>=max){
			max=arr[i].length();
			mark=i;
		}
			
	}
	
	
	for(int i=0;i<max;i++){
		for(int j=arr.size()-1;j>=0;j--){
			if(arr[j].length()>i)
				cout<<arr[j][i];
			else if(j>mark)
				cout<<" ";
		}
		cout<<endl;
	}
} 
