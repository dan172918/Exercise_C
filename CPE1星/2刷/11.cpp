#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main(){
	string a,b;
	vector<char> arr;
	while(cin>>a>>b){
		for(int i=0;i<a.length();i++){
			if(b.length()==0)
				break;
			for(int j=0;j<b.length();j++){
				if(b.find_first_of(a[i])!=string::npos){
					arr.push_back(a[i]);
					b.erase(b.find_first_of(a[i]),1);
					break;
				}
			}
		}
		sort(arr.begin(),arr.end());
		for(int i=0;i<arr.size();i++){
			cout<<arr[i];
		}
		cout<<endl;
		arr.clear();
	}
}
