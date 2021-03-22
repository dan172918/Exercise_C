#include<iostream>
#include<string>
using namespace std;

int main(){
	string str,dataStr[3]={"qwertyuiop[]\\","asdfghjkl\;\'","zxcvbnm,./"};
	while(getline(cin,str)){
		for(int i=0;i<str.length();i++){
			str[i] = tolower(str[i]);
			for(int j=0;j<3;j++){
				size_t found = dataStr[j].find(str[i]);
				if (found!=string::npos){
					str[i]=dataStr[j].at(found-2);
					break;
				}
			}
		}
		cout<<str<<endl;
	}
}
