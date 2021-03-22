#include<iostream>
#include<vector>
using namespace std;

int main(){
	int a,b;
	while(cin>>a>>b){
		vector<int> arr;
		bool isboring =false;
		if(b==1)
			isboring =true;
		else{
			while(a!=1){
				if(a%b!=0){
					isboring =true;
					break;
				}
				arr.push_back(a);
				a/=b;
			}
		}
		if(isboring)
			cout<<"Boring!";
		else{
			arr.push_back(1);
			for(auto it=arr.begin();it!=arr.end();it++){
				cout<<*it;
				if(it!=arr.end()-1)
					cout<<" ";
			}
		}		
		cout<<endl;
	}
}
