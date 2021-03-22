#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){
	int num;
	map<char,string> m;
	m['c']="0111001111";m['d']="0111001110";m['e']="0111001100";m['f']="0111001000";m['g']="0111000000";
	m['a']="0110000000";m['b']="0100000000";
	m['C']="0010000000";m['D']="1111001110";m['E']="1111001100";m['F']="1111001000";m['G']="1111000000";
	m['A']="1110000000";m['B']="1100000000";
	cin>>num;
	string str;
	while(num--){
		int arr[10]={0};
		cin>>str;
		for(int i=0;i<10;i++)
			arr[i]=m[str[0]][i]-'0';
		
		for(int i=1;i<str.length();i++){
			for(int j=0;j<10;j++){
				if(m[str[i]][j]=='1'&&m[str[i-1]][j]=='0')
					arr[j]++;
			}
		}
		for(int i=0;i<10;i++){
			cout<<arr[i];
			if(i!=9)
				cout<<" ";
		}
			
		cout<<endl;
	}
}
