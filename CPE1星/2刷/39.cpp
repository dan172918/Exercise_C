#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	double x[4],y[4];
	while(cin>>x[0]>>y[0]){
		for(int i=1;i<4;i++)
			cin>>x[i]>>y[i];
		for(int i=0;i<2;i++)
			for(int j=2;j<4;j++)
				if(x[i]==x[j]&&y[i]==y[j]){
					cout<<fixed<<setprecision(3)<<x[(i+1)%2]+x[(j-2+1)%2+2]-x[i]<<" "<<y[(i+1)%2]+y[(j-2+1)%2+2]-y[i]<<endl;
				}
	}
	
}
