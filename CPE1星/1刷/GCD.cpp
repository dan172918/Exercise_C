#include<iostream>
#include<iomanip>
using namespace std;

int GCD(int i,int j){
	while(i%j!=0){
		int tmp=i;
		i=j;
		j=tmp%j;
	}
	return j;
}

int main()
{
	int n;
	cin>>n;
	while(n!=0){
		int G=0;
		for(int i=1;i<n;i++)
			for(int j=i+1;j<=n;j++)
				G+=GCD(i,j);
		cout<<G<<endl;
		cin>>n;
	}
}


