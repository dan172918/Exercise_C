#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
	string str,base;
	for(int i=0;i<62;i++){
		if(i>35)
			base.push_back(char(i+'a'-36));
		else if(i>9)
			base.push_back(char(i+'A'-10));
		else
			base.push_back(char(i+'0'));
	}
	while(getline(cin,str)){
		string tmp = str;
		sort(&tmp[0],&tmp[0]+str.length());
		int startFind = base.find_first_of(tmp[str.length()-1])+1;
		for(startFind=(startFind>1)?startFind:2;startFind<=62;startFind++){
			unsigned long long int total = 0;
			for(int i=0;i<str.length();i++){
				if(base.find(str[i],1)!=string::npos){
					total+=base.find(str[i],1)*startFind;
				}	
			}
			if(total%(startFind-1)==0){
				cout<<startFind<<endl;
				break;
			}
		}
		if(startFind==63)
			cout<<"such number is impossible!"<<endl;
	}
} 
