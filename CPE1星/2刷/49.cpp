#include<iostream>
#include<algorithm>
using namespace std;
int n,m;
bool isOdd(int v){
	return v%2;
}
bool func(int a,int b){
	if(a%m!=b%m) return a%m<b%m;
	if(isOdd(a)!=isOdd(b)) return isOdd(a);
	if(isOdd(a)) return a>b;
	return b>a;
}
int main(){
	
	while(cin>>n>>m){
		cout<<n<<" "<<m<<endl;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		sort(arr,arr+n,func);
		for(int i=0;i<n;i++)
			cout<<arr[i]<<endl;
	}
}
