#include<iostream>
using namespace std;

int main()
{
	int num,M,N,Q,x,y;
	cin>>num;
	while(num--){
		cin>>M>>N>>Q;
		cout<<M<<" "<<N<<" "<<Q<<endl;
		char arr[M][N];
		for(int i=0;i<M;i++)
			for(int j=0;j<N;j++)
				cin>>arr[i][j];
		while(Q--){
			cin>>x>>y;
			bool isSame = true;
			int count=1;
			while(isSame && x-count>=0 && x+count<M && y-count>=0 && y+count<N){
				for(int i=x-count;i<=x+count;i++){
					for(int j=y-count;j<=y+count;j++){
						if(arr[i][j]!=arr[x][y]){
							isSame = false;
							break;
						}
					}
					if(!isSame)	break;				
				}
				if(!isSame)	break;
				else count++;
			}
			cout<<2*(--count)+1<<endl;
		}
	}
}


