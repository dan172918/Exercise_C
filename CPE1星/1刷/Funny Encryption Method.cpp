#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
	int num,M,X1;
	cin>>num;
	while(num--){
		int b1=0,b2=0;
		cin>>M;
		X1=M;
		while(X1){
			if(X1&1)
				b1++;
			X1=X1>>1;
		}
		M=stoi ("0x" + to_string(M),nullptr,0);
  		while(M){
			if(M&1)
				b2++;
			M=M>>1;
		}
		cout<<b1<<" "<<b2<<endl;
	}
}


