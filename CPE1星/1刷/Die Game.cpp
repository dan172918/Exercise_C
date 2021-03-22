#include <iostream>
using namespace std;

int main() {
	int num,tmp;
	string str;
	while (cin >> num){
		if (num <= 0)
			break;
		int _1=1,_2=2,_3=3,_4=4,_5=5,_6=6;
		for (int i = 0; i < num; i++){
			cin >> str;
			if(str[0]=='e'){
				swap(_4,_1);
				swap(_1,_3);
				swap(_3,_6);
			}
			else if(str[0]=='w'){
				swap(_3,_1);
				swap(_1,_4);
				swap(_4,_6);
			}
			else if(str[0]=='s'){
				swap(_5,_1);
				swap(_1,_2);
				swap(_2,_6);
			}
			else{
				swap(_2,_1);
				swap(_1,_5);
				swap(_5,_6);
			}
		}
		cout<<_1<<endl;
	}
}
