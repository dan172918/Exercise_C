#include<iostream>
#include<queue>
#include<cmath>
using namespace std;

int main(){
	int num,arr[36],n,m;
	cin>>num;
	for(int j=0;j<num;j++){
		cout<<"Case "<<j+1<<":"<<endl;
		for(int i=0;i<36;i++)
			cin>>arr[i];
		cin>>n;
		while(n--){
			cin>>m;
			cout<<"Cheapest base(s) for number "<<m<<": ";
			queue<int> ans;
			int max = pow(2,31)-1;
			for(int i=2;i<=36;i++){
				int tmp = m,total=0;
				while(tmp!=0){
					total+=arr[tmp%i];
					tmp/=i;
				}
				if(total==max)
					ans.push(i);
				else if(total<max){
					max=total;
					while(!ans.empty()){
						ans.pop();
					}
					ans.push(i);
				}
			}
			while(1){
				cout<<ans.front();
				ans.pop();
				if(!ans.empty())
					cout<<" ";
				else
					break;
			}
			if(n!=0)
				cout<<endl;
		} 
		if(j+1!=num)
			cout<<endl;
	}	
}
