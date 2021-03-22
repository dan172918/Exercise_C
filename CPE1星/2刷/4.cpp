#include<iostream>
using namespace std;

int main(){
	int n,m;
	while(cin>>n>>m){
		cout<<n<<" "<<m<<" ";
		if(n>m)
			swap(n,m);
		int max = 0;
		while(n<=m){
			int count = 1,tmp=n;
			while(tmp!=1){
				if(tmp%2==1)
					tmp=3*tmp+1;
				else
					tmp/=2;
				count++;
			}
			max=(max<count)?count:max;
			n++;
		}
		cout<<max<<endl;
	}
}
