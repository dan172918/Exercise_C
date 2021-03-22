#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	string str1,str2;
	while(cin>>str1>>str2){
		vector<char> arr;
		for(int i=0;i<str1.length();i++){
			size_t found = str2.find(str1[i]);
			if (found!=string::npos){
				arr.push_back(str1[i]);
				str2.erase(found,1);
			}
				
		}
		sort(arr.begin(),arr.end());
		for(int i=0;i<arr.size();i++)
			cout<<arr[i];
		cout<<endl;
		arr.clear();
	}
}
