#include<iostream>
#include<algorithm>
#include<vector>
#include<iomanip>
using namespace std;

int main()
{
	int testCase,r,tmp;
	cin>>testCase;
	for(int i=0;i<testCase;i++){
		cin>>r;
		vector<int> S;
		for(int j=0;j<r;j++){
			cin>>tmp;
			S.push_back(tmp);
		}
		sort(S.begin(),S.end());

		int m,total = 0;
		if(r%2==1)
			m=S.at(r/2);
		else
			m=(S.at(r/2-1)+S.at(r/2))/2;
			
		for(int j=0;j<r;j++)
			total += abs(m-S.at(j));
		
		cout<<total<<endl;
	}
}


