#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
	int num,n,i;
	float p;
	cin>>num;
	while(num--){
		cin>>n>>p>>i;
		double total=0;
		for(int j=0;j<50;j++)
			total+=pow(1-p,j*n+i-1)*p;
		cout<<fixed<<setprecision(4)<<total<<endl;
	}
}
