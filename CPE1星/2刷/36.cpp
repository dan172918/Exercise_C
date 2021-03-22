#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int num,r,c,t,n,m;
	cin>>num;
	while(num--){
		cin>>r>>c>>t;
		cout<<r<<" "<<c<<" "<<t<<endl;
		string arr[r];
		for(int i=0;i<r;i++)
			cin>>arr[i];
		while(t--){
			cin>>n>>m;
			bool findSqu=true;
			int edge=1;
			while(findSqu&&n-edge>=0&&n+edge<r&&m-edge>=0&&m+edge<c){
				for(int i=n-edge;i<=n+edge;i++){
					for(int j=m-edge;j<=m+edge;j++){
						if(arr[i][j]!=arr[n][m]){
							findSqu=false;
							break;
						}
					}
					if(!findSqu)
						break;	
				}
				if(findSqu)
					edge++;	
			}
			cout<<2*(--edge)+1<<endl;
		}
	}
}
