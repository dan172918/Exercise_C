#include<iostream>
using namespace std;
int GCD(int i,int j){
	while(i%j!=0){
		swap(i,j);
		j%=i;
	}
	return j;
}
int main(){
	int num;
	while(cin>>num&&num!=0){
		int g=0;
		for(int i=1;i<num;i++)
			for(int j=i+1;j<=num;j++)
				g+=GCD(i,j);
		cout<<g<<endl;
	}
}
