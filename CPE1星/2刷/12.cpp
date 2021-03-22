#include<iostream>
#include<vector>
using namespace std;

int main(){
	int max=0,mark;
	string str;
	vector<string> arr;
	while(getline(cin,str)&&str!=""){
		arr.push_back(str);
		if(str.length()>max){
			max=str.length();
			mark=arr.size()-1;
		}
	}
	for(int j=0;j<max;j++){
		for(int i=arr.size()-1;i>=0;i--){
			if(arr[i].length()>j)
				cout<<arr[i][j];
			else if(i>=mark)
				cout<<" ";
		}
		cout<<endl;
	}

}
