#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	while(cin>>n){
		bool isPrime = true;
		for(int i=2;i<=ceil(sqrt(n));i++){
			if(n%i==0 && n>2){
				isPrime = false;
				break;
			}
		}
		if(isPrime){
			int m=0,n1=n;
			while(n1!=0){
				m+=n1%10;
				m*=10;
				n1/=10;
			}
			m/=10;
			bool isEmirp = true;
			if(n==m) isEmirp = false;
			for(int i=2;i<=ceil(sqrt(m));i++){
				if(m%i==0){
					isEmirp = false;
					break;
				}
			}
			if(isEmirp)
				cout<<n<<" is emirp."<<endl;
			else
				cout<<n<<" is prime."<<endl;
		}
		else{
			cout<<n<<" is not prime."<<endl;
		}
	}
}


