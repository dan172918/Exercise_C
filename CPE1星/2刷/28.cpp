#include<iostream>
#include<bitset>
#include<string>
using namespace std;

int main(){
	int num;
	while(cin>>num&&num!=0){
		int total=0;
		string str;
		while(num!=0){
			if(num&1){
				total++;
				str.insert(0,"1");
			}
			else
				str.insert(0,"0");	
			num/=2;
		}
		cout<<"The parity of "<<str<<" is "<<total<<" (mod 2)."<<endl;
	}
} 
