#include<iostream>
using namespace std;
 
int main()
{
    int er,ec,x,y;
    string str,m;
    cin>>er>>ec; 
	int sc[er+1][ec+1]={0};
    while(cin>>x>>y>>m>>str){
    	for(int i=0;i<str.length();i++){
    		if((y<0||y>ec)||(x<0||x>er))
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
    			if(m=="E"&&(sc[x][y]!=1||x+1<=er))
					x++;
				else if(m=="S"&&(sc[x][y]!=1||y-1>0))
					y--;
				else if(m=="W"&&(sc[x][y]!=1||x-1>0))
					x--;
				else if(m=="N"&&(sc[x][y]!=1||y+1<=ec))
					y++;
			}
		}
		if(x<0){
			cout<<x+1<<" "<<y<<" "<<m<<" LOST"<<endl;
			sc[x+1][y]=1;
		}
		else if(y<0){
			cout<<x<<" "<<y+1<<" "<<m<<" LOST"<<endl;
			sc[x][y+1]=1;
		}
		else if(x>er){
			cout<<x-1<<" "<<y<<" "<<m<<" LOST"<<endl;
			sc[x-1][y]=1;
		}
		else if(y>ec){
			cout<<x<<" "<<y-1<<" "<<m<<" LOST"<<endl;
			sc[x][y-1]=1;
		}
		else{
			cout<<x<<" "<<y<<" "<<m<<endl;
		}
    } 
}
