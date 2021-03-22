#include<iostream>
#include<string>
#include<algorithm>
#include<bitset>
using namespace std;

int main()
{
	int N,tmp;
	string str1,str2;
	cin>>N;
	tmp = N;
	while(N--){
		cin>>str1>>str2;
		bitset<32> s1 (str1);
		bitset<32> s2 (str2);
		bool isfind = false;
		for(int i=2;i<=min(s1.to_ulong(),s2.to_ulong());i++)
			if(s1.to_ulong()%i==0 && s2.to_ulong()%i==0){
				isfind = true;
				break;
			}
		if(isfind)
			cout<<"Pair #"<<tmp-N<<": All you need is love!"<<endl;
		else
			cout<<"Pair #"<<tmp-N<<": Love is not all you need!"<<endl;
	}
}


