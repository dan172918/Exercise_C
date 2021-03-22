#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){
	string str;
	int count=0;
	while(getline(cin,str)){
		count++;
		if(count>1)
			cout<<endl;
		map<char,int> arr;
		for(int i=0;i<str.length();i++){
			auto search=arr.find(str[i]);
			if(search!=arr.end()){
				(search->second)++;
			}
			else
				arr[str[i]]=1;
		}
		for(int i=1;i<=1000;i++){
			for(auto j=arr.rbegin();j!=arr.rend();j++){
				if(j->second==i)
					cout<<int(j->first)<<" "<<j->second<<endl;
			}
		}
	}
}
