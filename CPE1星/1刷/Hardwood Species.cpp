#include<iostream>
#include<iomanip>

#include<map>
using namespace std;

int main(){
	int n;
	string str;
	cin>>n;
	cin.ignore();
	while(n--){
		map<string, double> arr;
		map<string, double>::iterator it;
		int count=0;
		while(getline(cin,str)){
			if(str=="" && count==0)
				continue;
			if(str=="" && count!=0)
				break;
			it = arr.find(str);
			if(it!=arr.end())
				(it->second)++;
			else
				arr[str] = 1;
			count++;
		}
		for(it = arr.begin();it!=arr.end();it++){
			cout<<it->first<<" "<<fixed<<setprecision(4)<<(it->second)*100/count<<endl;
		}
		if(n!=0)
			cout<<endl;
		arr.clear();
	}
}
