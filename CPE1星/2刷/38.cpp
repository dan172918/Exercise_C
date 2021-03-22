#include<iostream>
using namespace std;

int main(){
	int num,x1,y1,x2,y2;
	cin>>num;
	for(int j=1;j<=num;j++){
		cout<<"Case "<<j<<": ";
		cin>>x1>>y1>>x2>>y2;
		int total1=0,total2=0;
		for(int i=0;i<=x1+y1;i++)
			total1+=i;
		for(int i=0;i<=x2+y2;i++)
			total2+=i;
		total1+=x1;
		total2+=x2;
		cout<<total2-total1<<endl;
		
	}
}
