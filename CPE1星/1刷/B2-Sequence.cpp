#include <iostream>
#include <set>
using namespace std;
 
int main() {
	int N,b,count=0;
    while (cin >> N){
        int a[N];
        bool isB2 = true;
        for (int i = 0; i < N; i++){
            cin >> a[i];
            if(i>0 && a[i-1] >= a[i])
            	isB2 = false;
        }
        if(isB2){
        	set <int> B2;
	        for (int i = 0; i < N-1; i++){
	            for (int j = i; j < N; j++){
	                int tmp = a[i] + a[j];
	                if (B2.count(tmp)) {
	                    isB2 = false;
	                    break;
	                }
	                B2.insert(tmp);
	            }
	            if (!isB2) break;
	        }
		}
        
        cout << "count #" << ++count;
        if (isB2) cout << ": It is a B2-Sequence.\n\n";
        else cout << ": It is not a B2-Sequence.\n\n";
    }
}


