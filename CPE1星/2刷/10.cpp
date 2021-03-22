#include<iostream>
#include<string>
using namespace std;

int main(){
	string str;
	while(cin>>str && str!="0"){
		while(str.length()>1){
			int sum = 0;
			for(int i=0;i<str.length();i++){
				sum+=int(str[i]-'0');
			}
			str=to_string(sum);
		}
		cout<<str<<endl;
	}
}
