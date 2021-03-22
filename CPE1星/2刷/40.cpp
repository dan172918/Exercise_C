#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int num;
	while(cin>>num){
		int arr[num],ans1,ans2=0,ans3;
		for(int i=0;i<num;i++)
			cin>>arr[i];
		sort(arr,arr+num);
		for(int i=0;i<num;i++){
			if(num%2){
				ans1=arr[num/2];
				ans3=1;
				if(arr[i]==ans1)
					ans2++;
			}
			else{
				ans1=arr[num/2-1];
				ans3=arr[num/2]-arr[num/2-1]+1;
				if(arr[i]==arr[num/2]||arr[i]==arr[num/2-1])
					ans2++;
			}
		}
		cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;
	}
} 
