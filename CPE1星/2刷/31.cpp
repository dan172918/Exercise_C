#include<iostream>
#include<bitset>
#include<algorithm>
using namespace std;

int main(){
	int num;
	cin>>num;
	for(int i=1;i<=num;i++){
		cout<<"Pair #"<<i<<": ";
		string str1,str2;
		cin>>str1>>str2;
		bitset<32> a(str1);
		bitset<32> b(str2);
		bool isLove = false;
		for(int j=2;j<=min(a.to_ulong(),b.to_ulong());j++){
			if(a.to_ulong()%j==0&&b.to_ulong()%j==0){
				isLove = true;
				break;
			}
		}
		if(isLove)
			cout<<"All you need is love!"<<endl;
		else
			cout<<"Love is not all you need!"<<endl;
	}

}
