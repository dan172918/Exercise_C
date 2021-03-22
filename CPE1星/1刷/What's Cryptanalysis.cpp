#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
	int num,arr[26]={0};
	string str;
	cin>>num;
	cin.ignore();
	while(getline(cin,str)&&num){
		if(str=="")
			continue;
		else
			num--;
		for(int i=0;i<str.length();i++){
			char temp = toupper(str[i]);
			if(temp-'A'>=0&&temp-'Z'<=25){
				arr[int(temp-'A')]++;
			}
		}
	}
	int *Max = max_element(arr,arr+25);
	for(int i=*Max;i>0;i--)
		for(int j=0;j<26;j++){
			if(arr[j]==i)
				cout<<char('A'+j)<<" "<<arr[j]<<endl;
		}
} 

