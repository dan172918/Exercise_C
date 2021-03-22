#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;

int main()
{
	int num;
	cin>>num;
	vector<int> a;
	while(num!=0){
		int count = 0;
		cout<<"The parity of ";

		while(num){
			a.push_back(num&1);
			if(num&1)
				count++;
			num=num>>1;
		}
		for(int i=a.size()-1;i>=0;i--)
			cout<<a.at(i);
		cout<<" is "<<count<<" (mod 2)."<<endl;
		a.clear();
		cin>>num;
	}
}


