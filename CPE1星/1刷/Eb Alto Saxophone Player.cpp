#include<iostream>
#include<map>
using namespace std;

int main(){
	map<char,string> arr;
	map<char,string>::iterator it;
	arr['c']="0111001111";	arr['d']="0111001110";
	arr['e']="0111001100";	arr['f']="0111001000";
	arr['g']="0111000000";	arr['a']="0110000000";
	arr['b']="0100000000";	arr['C']="0010000000";
	arr['D']="1111001110";	arr['E']="1111001100";
	arr['F']="1111001000";	arr['G']="1111000000";
	arr['A']="1110000000";	arr['B']="1100000000";
	int ans[10],num;
	string str,tmp1,tmp2;
	cin>>num;
	while(num--){
		cin>>str;
		it = arr.find(str[0]);
		tmp1 = it->second;
		for(int i=0;i<10;i++)
			ans[i]=tmp1[i]-'0';
		for(int i=1;i<str.length();i++){
			it = arr.find(str[i-1]);
			tmp1=it->second;
			it = arr.find(str[i]);
			tmp2=it->second;
			for(int j=0;j<10;j++){
				if(tmp1[j]=='0'&&tmp2[j]=='1')
					ans[j]++;
			}
		}
		for(int i=0;i<10;i++)
		{
			cout<<ans[i];
			if(i!=9)
				cout<<" ";
		}
		cout<<endl;
		
	} 
	
}
