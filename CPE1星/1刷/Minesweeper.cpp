#include<iostream>
using namespace std;

int main(){
	int r,c,count = 1;
	string tmp;
	while(cin>>r>>c){
		if(r==0 && c==0)
			break;
		if(count>1)
			cout<<endl;
		cout<<"Field #"<<count<<":"<<endl;
		char arr[r][c];
		for(int i=0;i<r;i++)
			for(int j=0;j<c;j++)
				arr[i][j] = '0';
		for(int i=0;i<r;i++){
			cin>>tmp;
			for(int j=0;j<c;j++){
				if(tmp[j]=='.')
					continue;
				else{
					arr[i][j]=tmp[j];
					for(int n=(i-1<0)?i:i-1;n<=((i+1==r)?i:i+1);n++){
						for(int m=(j-1<0)?j:j-1;m<=((j+1==c)?j:j+1);m++){
							if(arr[n][m]=='*')
								continue;
							else
								arr[n][m]++;
						}
					}
				}
				

			}
		}
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++)
				cout<<arr[i][j];
			cout<<endl;
		}
			

			
		count++;
	}
}
