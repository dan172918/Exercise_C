#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	string number;
	while(cin>>number){
		if(number == "0")
			break;
		int odd=0,even=0;
		for(int i=0;i<number.length();i++)
			if(i%2==0)
				odd +=int(number[i])-int('0');
			else
				even +=int(number[i])-int('0');
		if(abs(odd-even)%11==0)
			cout<<number<<" is a multiple of 11."<<endl;
		else
			cout<<number<<" is not a multiple of 11."<<endl;
	}
	
}


