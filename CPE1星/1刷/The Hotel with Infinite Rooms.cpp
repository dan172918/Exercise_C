#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	long long int S,D;
	while(cin>>S>>D){
		while(D>0){
			D-=S;
			S++;
		} 
		cout<<--S<<endl;
	}
}
