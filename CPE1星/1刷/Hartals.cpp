#include<iostream>
using namespace std;

int main()
{
	int Case,N,P,pi,sum,Arr[3651];
	cin>>Case;
	while(Case--){
		cin>>N>>P;
		for(int i=0;i<N;i++)
			Arr[i]=0;
		for(int i=0;i<P;i++){
			cin>>pi;
			sum=pi;
			while(sum<=N){
				if(sum%7!=6 && sum%7!=0)
					Arr[sum]=1;
				sum+=pi;
			}
		}
		sum=0;	
		for(int i=1;i<=N;i++){
			if(Arr[i]==1)
				sum++;
		}
		cout<<sum<<endl;
	}
}
