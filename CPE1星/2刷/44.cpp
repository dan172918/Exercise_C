#include<iostream>
using namespace std;

int main(){
	int r,c,count=1;
	string str;
	while(cin>>r>>c&&r!=0&&c!=0){
		if(r!=0&&c!=0&&count!=1)
			cout<<endl;
		cout<<"Field #"<<count<<":"<<endl;
		int arr[r][c]={0};
		for(int i=0;i<r;i++)
			for(int j=0;j<c;j++)
				arr[i][j]=0;
		for(int i=0;i<r;i++){
			cin>>str;
			for(int j=0;j<c;j++){
				if(str[j]=='*'){
					for(int n=(i==0)?0:i-1,nu=(i==r-1)?r-1:i+1;n<=nu;n++)
						for(int m=(j==0)?0:j-1,mu=(j==c-1)?c-1:j+1;m<=mu;m++)
								arr[n][m]++;
					arr[i][j]=9;
				}
			}
		}
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				if(arr[i][j]>8)
					cout<<"*";
				else
					cout<<arr[i][j];
			}	
			cout<<endl;
		}
		count++;
	}
}
