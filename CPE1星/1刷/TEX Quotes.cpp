#include<iostream>
#include<string>
using namespace std;

int main(){
	string str;
	bool isFirstQuotes = false;
	while(getline(cin,str)){
		for(int i=0;i<str.length();i++){
			if(str[i]=='\"'){
				if(!isFirstQuotes){
					isFirstQuotes = true;
					str.replace(i,1,"``");
				}
				else{
					isFirstQuotes = false;
					str.replace(i,1,"\'\'");
				}
			}
		}
		cout<<str<<endl;
	}
}
