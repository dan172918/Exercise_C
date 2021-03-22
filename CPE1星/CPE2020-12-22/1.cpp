#include<iostream>
using namespace std;

int main(){
	int N,e,f,c,emptySoda=0,drinkSoda;
	cin>>N;
	
	while(N>0){
		cin>>e>>f>>c;
		drinkSoda = 0;
		emptySoda = e+f;
		while(emptySoda>=c){
			drinkSoda += emptySoda/c;
			emptySoda = emptySoda/c + emptySoda%c;
		}
		cout<<drinkSoda<<endl;
		N--;
	}
	
}
