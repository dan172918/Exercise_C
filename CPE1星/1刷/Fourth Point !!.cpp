#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double x[4],y[4],xc=0,yc=0;
	while(cin>>xc>>yc){
		x[0]=xc; y[0]=yc;
		for(int i=1;i<4;i++){
			cin>>x[i]>>y[i];
			xc+=x[i];
			yc+=y[i];
		}
		bool isfind = false;
		for(int i=0;i<3;i++){
			for(int j=i+1;j<4;j++){
				if(x[i]==x[j]&&y[i]==y[j]){
					xc-=3*x[i];
					yc-=3*y[i];
					isfind = true;
					break;
				}
			}
			if(isfind) break;
		}
		cout<<fixed<<setprecision(3)<<xc<<" "<<yc<<endl;	
		xc=0;yc=0;
	}
}


