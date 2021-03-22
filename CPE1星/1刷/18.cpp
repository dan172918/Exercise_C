#include<iostream>
#include<iomanip>
#include<vector>
#include<cmath>
using namespace std;

int main()
{
	int x,a;
	vector<int> seq;
	while(cin>>x){
		int total=0;
		while(!cin.eof()){
			cin>>a;
			seq.push_back(a);
		}
		a=seq.size()-1;
		for(int i=0;i<seq.size();i++){
			total+=seq.at(i)*a*pow(x,a-1);
			a--;
		}
		cout<<total<<endl;
		seq.clear();
	}
}

