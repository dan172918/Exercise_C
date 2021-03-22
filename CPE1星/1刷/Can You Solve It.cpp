#include<iostream>
using namespace std;

int main()
{
	int num,count = 1;
	cin>>num;
	while(num--){
		cout<<"Case "<<count<<": ";
		int x1,y1,x2,y2,step=0;
		cin>>x1>>y1>>x2>>y2;
		for(int i=x1+y1+1;i<=x2+y2;i++)
			step+=i;
		step = step -x1 +x2;
		cout<<step<<endl;
		
	}
}


