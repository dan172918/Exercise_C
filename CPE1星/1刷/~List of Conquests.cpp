#include<iostream>
#include<map>
using namespace std;
int main(){
	map<string,int> Str;
	string first_s;
	int n;
	cin>>n;
	while (n--){
	  cin>>first_s;
	  Str[first_s]++;
	  getline(cin,first_s);
	}
	for(map<string,int>::iterator iter=Str.begin(); iter!=Str.end();iter++){
	    cout<<iter->first<<" ";
	    cout<<iter->second<<endl;
	}
}
