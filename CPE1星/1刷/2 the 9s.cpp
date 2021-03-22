#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	cin>>str;
	while(str!="0"){
		int degree=0;
		string tmp=str;
		while(str!="9"){
			int s=0;
			for(int i=0;i<str.size();i++)
				s+=(str[i]-'0');
			if(s%9==0)
				degree++;
			else
				break;
			str = to_string(s);		
		}
		if(tmp=="9")
			cout<<tmp<<" is a multiple of 9 and has 9-degree 1";
		else if(degree!=0)
			cout<<tmp<<" is a multiple of 9 and has 9-degree "<<degree;
		else
			cout<<tmp<<" is not a multiple of 9";
		cout<<"."<<endl;
		cin>>str;
	}
}

