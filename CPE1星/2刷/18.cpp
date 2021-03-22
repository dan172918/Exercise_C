#include<iostream>
#include<vector>
#include<cstring>
#include<cmath>
using namespace std;

int main(){
	int num;
	char *pch;
	string str;
	while(cin>>num){
		cin.ignore();
		getline(cin,str);
		vector<long long int> arr;
		pch = strtok (&str[0]," ");
		while (pch != NULL){
			arr.push_back(stoi(pch,nullptr,0));
			pch = strtok (NULL, " ");
		}
		int total=0,j=arr.size()-1;
		for(int i=0;i<arr.size()&&j>0;i++,j--){
			total+=j*pow(num,j-1)*arr[i];
		}
		cout<<total<<endl;
	}
}
