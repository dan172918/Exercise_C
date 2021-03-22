#include<iostream>
using namespace std;

int main(){
	int row,col,x,y;
	string str,m;
	cin>>row>>col;
	int arr[row+1][col+1]={0};
	while(cin>>x>>y>>m>>str){
    	for(int i=0;i<str.length();i++){
    		if((y<0||y==col+1)||(x<0||x==row+1))
    			break;
    		if(str[i]=='R'){
    			if(m=="E")
					m="S";
				else if(m=="S")
					m="W";
				else if(m=="W")
					m="N";
				else if(m=="N")
					m="E";    			
			}
			else if(str[i]=='L'){
    			if(m=="E")
					m="N";
				else if(m=="S")
					m="E";
				else if(m=="W")
					m="S";
				else if(m=="N")
					m="W";
			}
			else if(str[i]=='F'){
    			if(m=="E"&&(arr[x][y]!=1||x+1<=row))
					x++;
				else if(m=="S"&&(arr[x][y]!=1||y-1>0))
					y--;
				else if(m=="W"&&(arr[x][y]!=1||x-1>0))
					x--;
				else if(m=="N"&&(arr[x][y]!=1||y+1<=col))
					y++;
			}
		}
		if(x<0){
			cout<<x+1<<" "<<y<<" "<<m<<" LOST"<<endl;
			arr[x+1][y]=1;
		}
		else if(y<0){
			cout<<x<<" "<<y+1<<" "<<m<<" LOST"<<endl;
			arr[x][y+1]=1;
		}
		else if(x==row+1){
			cout<<x-1<<" "<<y<<" "<<m<<" LOST"<<endl;
			arr[x-1][y]=1;
		}
		else if(y==col+1){
			cout<<x<<" "<<y-1<<" "<<m<<" LOST"<<endl;
			arr[x][y-1]=1;
		}
		else{
			cout<<x<<" "<<y<<" "<<m<<endl;
		}
	}
}
