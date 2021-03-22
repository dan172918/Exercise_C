#include<iostream>
#include<iomanip>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
	int num,N,lastN;
	vector<int> sequence;
	while(cin>>num){
		bool isJolly = true;
		for(int i=0;i<num;i++){
			cin>>N;
			if(i>1){
				vector<int>::iterator it=find(sequence.begin(), sequence.end(),abs(N-lastN));
				if(it == sequence.end() && abs(N-lastN)<num)
					sequence.push_back(abs(N-lastN));
				else
					isJolly = false;
			}
			if(i == 1)
				if(abs(N-lastN)<num && abs(N-lastN)>0)
					sequence.push_back(abs(N-lastN));
				else
					isJolly = false;
			lastN = N;
		}
		
		if(isJolly)
			cout<<"Jolly"<<endl;
		else
			cout<<"Not jolly"<<endl;
		sequence.clear();
	}
}


