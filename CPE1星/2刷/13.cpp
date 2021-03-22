#include<iostream>
#include<string>
using namespace std;

int main(){
	string str;
	bool isfirst = true;
	while(getline(cin,str)){
		while(str.find_first_of("\"")!=string::npos){
			if(isfirst){
				isfirst = false;
				str.replace(str.find_first_of("\""),1,"``");
			}
			else{
				isfirst = true;
				str.replace(str.find_first_of("\""),1,"\'\'");
			}
		}
		cout<<str<<endl;
	}
}
