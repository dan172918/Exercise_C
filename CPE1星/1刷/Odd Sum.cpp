#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int num,tmp,a,b;
	cin>>num;
	tmp = num;
	while(num--){
		cin>>a>>b;
		int total = 0;
		a=(a%2==0)?a+1:a;
		for(int i=a;i<=b;i+=2)
			total+=i;
		cout<<"Case "<<tmp-num<<": "<<total<<endl;
	}
}


