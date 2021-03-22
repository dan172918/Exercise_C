#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	int num,Player,N;
	double p;
	cin>>num;
	while(num--){
		double ans = 0;
		cin>>Player>>p>>N;
		for(int i=0;i<50;i++){
			ans += pow((1-p),N-1)*p;
			N+=Player;
		}
		cout<<fixed<<setprecision(4)<<ans<<endl;
	}
}


