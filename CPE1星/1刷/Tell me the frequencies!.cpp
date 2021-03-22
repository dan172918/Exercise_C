#include<iostream>
#include<map>
using namespace std;

int main(){
	map<char,int> arr;
	map<char,int>::iterator it;
	string str;
	int count = 0;
	while(getline(cin,str)){
		if(count != 0)
			cout<<endl;
		for(int i=0;i<str.size();i++){
			it = arr.find(str[i]);
			if(it!=arr.end())
				(it->second)++;
			else
				arr[str[i]] = 1;
		}
		map<char,int>::reverse_iterator  iter;
		for(int i=1;i<=1000;i++){
			for(iter = arr.rbegin();iter!=arr.rend();iter++){
				if(iter->second == i)
					cout<<int(iter->first)<<" "<<iter->second<<endl;
			}
		}
		count++;
		arr.clear();
	}
}
