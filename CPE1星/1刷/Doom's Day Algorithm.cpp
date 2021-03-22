#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	int num,M,D;
	string week[7]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	int Mon[12]={10,21,28,4,9,6,11,8,5,10,7,12};
	cin>>num;
	while(num--){
		cin>>M>>D;
		cout<<week[(Mon[M-1]>D)?(7-abs(Mon[M-1]-D)%7)%7:abs(Mon[M-1]-D)%7]<<endl;
	}
}


