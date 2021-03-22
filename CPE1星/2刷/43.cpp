#include<iostream>
#include<iomanip>
#include<map>
using namespace std;

int main(){
	bool isStart = false;
	int num;
	string str;
	cin>>num;
	cin.ignore();
	for(int i=0;i<num;i++){
		int count = 0;
		map<string,double> arr;
		while(getline(cin,str)){
			if(str==""&&!isStart)
				isStart = true;
			else if(str==""&&isStart){
				isStart = false;
				break;
			}
			else{
				auto search = arr.find(str);
				if(search!=arr.end())
					(search->second)++;
				else
					arr[str] = 1;
				count++;
			}	
		}
		for(auto it=arr.begin();it!=arr.end();it++)
			cout<<fixed<<setprecision(4)<<it->first<<" "<<(it->second)*100/count<<endl;
		if(i<num-1)
			cout<<endl;
	}
} 
