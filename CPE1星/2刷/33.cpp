#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	int num;
	while(cin>>num){
		bool isprime = true;
		for(int i=2;i<num;i++){
			if(num%i==0)
				isprime = false;
		}
		if(isprime){
			cout<<num;
			bool isemirp = true;
			string str=to_string(num),str1=to_string(num);
			reverse(str.begin(),str.end());
			if(str1==str)
				isemirp = false;
			num = stoi(str);
			for(int i=2;i<num;i++){
				if(num%i==0)
					isemirp = false;
			}
			if(isemirp && num>9)
				cout<<" is emirp."<<endl;
			else
				cout<<" is prime."<<endl;
		}
		else
			cout<<num<<" is not prime."<<endl;
	}
}
