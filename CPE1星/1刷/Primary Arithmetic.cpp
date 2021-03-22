#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int n,m;
	while(cin>>n>>m){
		if(n==0&&m==0)
			break;
		int carryNum=0,carry=0;
		while(n!=0||m!=0){
			if(n%10+m%10+carry>9){
				carryNum++;
				carry++;
			}
			else if(carry>0)
				carry--;
			n/=10;
			m/=10;
		}
		if(carryNum == 0)
			cout<<"No carry operation."<<endl;
		else if(carryNum == 1)
			cout<<carryNum<<" carry operation."<<endl;
		else
			cout<<carryNum<<" carry operations."<<endl;
	}
}


