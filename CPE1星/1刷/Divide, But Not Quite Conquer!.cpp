#include<iostream>
#include<vector>
using namespace std;

int main()
{
	unsigned int n,m;
	vector<unsigned int>arr;
	while(cin>>n>>m){
		bool isBoring = false;
		if(m==1) 
			isBoring = true;
		else{
			while(n!=1){
				if(n%m!=0 ){
					isBoring = true;
					break;
				}
				arr.push_back(n);
				n/=m;
			}
		}
	
		if(isBoring)
			cout<<"Boring!";
		else{
			arr.push_back(1);
			for(int i=0;i<arr.size();i++)
				if(i==arr.size()-1)
					cout<<arr.at(i);
				else
					cout<<arr.at(i)<<" ";
		}
		cout<<endl;
		arr.clear();
	}
}


