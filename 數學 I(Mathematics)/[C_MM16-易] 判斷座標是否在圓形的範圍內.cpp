#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	double x,y;
	cin>>x>>y;
	if(x>=-100&&x<=100)
	{
		double circleY;
		circleY=sqrt(pow(100,2)-pow(x,2));
		if(y<=circleY&&y>=(circleY*-1))
			cout<<"inside"<<endl;
		else
			cout<<"outside"<<endl;
	}
	else
		cout<<"outside"<<endl;
}


