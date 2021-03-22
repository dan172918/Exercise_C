#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int T,temp;
	cin>>T;
	temp = T;
	while(T--){
		bool isSymmetric = true;
		char str1,str2;
		int N;
		cin>>str1>>str2>>N;
		int M[N][N];
		for(int i=0;i<N;i++)
			for(int j=0;j<N;j++){
				cin>>M[i][j];
				if(M[i][j]<0)
					isSymmetric = false;	
			}
				
		
		for(int i=0;i<N;i++){
			for(int j=0;j<N;j++)
				if(M[i][j]!=M[N-1-i][N-1-j]){
					isSymmetric = false;
					break;
				}
			if(!isSymmetric)
				break;
		}
		cout<<"Test #"<<temp-T<<": ";
		if(isSymmetric)
			cout<<"Symmetric."<<endl;
		else
			cout<<"Non-symmetric."<<endl;
			
	}
}


