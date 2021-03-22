#include<iostream>
#include<string>
using namespace std;
int main(){
	string str,arr="qwertyuiop[]asdfghjkl;\'zxcvbnm,.";	
	while(getline(cin,str)){
		for(int i=0;i<str.length();i++){
			str[i] = tolower(str[i]);
			if(str[i]==' ')
				cout<<" ";
			else
				cout<<arr[arr.find_first_of(str[i])-2];
		}
		cout<<endl;
	}
} 
