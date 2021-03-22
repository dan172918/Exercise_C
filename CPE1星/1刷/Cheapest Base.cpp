#include <iostream>
#include<vector>
#include<cmath>
using namespace std;

int main()
{
	int count=1,num,num1,testNum,cost[36];
	cin>>num;
	while(num--)
	{
		cout<<"Case "<<count<<":"<<endl;
		for(int i=0;i<36;i++)
			cin>>cost[i];
		cin>>num1;
		while(num1--)
		{
			cin>>testNum;
			int min=pow(2,31)-1;
			vector<int> minArr;
			for(int i=2;i<=36;i++)
			{
				int temp=testNum,sum=0;
				while(temp>0)
				{			
					sum+=cost[temp%i];
					temp/=i;
				}
				
				if(sum<min)
				{
					minArr.clear();
					minArr.push_back(i);
					min=sum;
				}
				else if(sum==min)
					minArr.push_back(i);
			}
			cout<<"Cheapest base(s) for number "<<testNum<<":"; 
			for(int i=0;i<minArr.size();i++)
				cout<<" "<<minArr.at(i);
			cout<<endl;
		}
		if(num!=0)
			cout<<endl;
		count++;
	}
}
