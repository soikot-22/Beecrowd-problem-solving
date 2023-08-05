#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin >> n && n){
        int res=0;
        for(int i=n; i>=1; i--){
            res += (i*i);
        }
        cout << res << endl;
    }
}
