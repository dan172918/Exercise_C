#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){
	int num;
	map<string,int> arr;
	cin>>num;
	cin.ignore();
	while(num--){
		string str;
		getline(cin,str);
		auto search = arr.find(str.substr(0,str.find_first_of(" ")));
		if (search != arr.end())
			(search->second)++;
		else
			arr[str.substr(0,str.find_first_of(" "))] = 1;
	}
	for(auto it=arr.begin();it!=arr.end();it++)
		cout<<it->first<<" "<<it->second<<endl;
}
