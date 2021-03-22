#include<iostream>
#include<string>
using namespace std;

int main(){
	string str;
	while(cin>>str&&str!="0"){
		cout<<str;
		bool is9 = true;
		int degree = (str=="9")?1:0;
		while(str!="9"){
			int total=0;
			for(int i=0;i<str.length();i++)
				total+=str[i]-'0';
			if(total%9==0){
				degree++;
				str=to_string(total);
			}
			else{
				is9 = false;
				break;
			}
		}
		
		if(is9)
			cout<<" is a multiple of 9 and has 9-degree "<<degree<<"."<<endl;
		else
			cout<<" is not a multiple of 9."<<endl;
			
	}
}
