#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
	int num,arr[26]={0};
	string str;
	cin>>num;
	cin.ignore();
	while(num&&getline(cin,str)){
		if(str=="")
			continue;
		else
			num--;
		for(int i=0;i<str.length();i++){
			str[i]=toupper(str[i]);
			if(str[i]>='A'&&str[i]<='Z')
				arr[int(str[i]-'A')]++;
		}
		
	}
	int *max = max_element(arr,arr+25);
	for(int i=*max;i>0;i--){
		for(int j=0;j<26;j++)
			if(arr[j]==i)
				cout<<char('A'+j)<<" "<<arr[j]<<endl;
	}
}
