#include<iostream>
#include<string>
using namespace std;

int main(){
	string num;
	while(cin>>num && num!="0"){
		while(num.length()>1){
			int total=0;
			for(int i=0;i<num.length();i++)
				total+=int(num[i]-'0');
			num = to_string(total);
		}
		cout<<num<<endl;
	}
} 
