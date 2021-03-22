#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int i,j,max;
	while(cin>>i>>j){
		bool smaller = true;
		if(i>j){
			swap(i,j);
			smaller = false;
		}	
		max=0;
		for(int k = i;k<=j;k++){
			int n = k,count = 1;
			while(n!=1){
				if(n%2==1)
					n=3*n+1;
				else
					n/=2;
				count++;
			}
			if(count>max)
				max=count;	
		}
		if(smaller)
			cout<<i<<" "<<j<<" "<<max<<endl;
		else
			cout<<j<<" "<<i<<" "<<max<<endl;
	}
}


