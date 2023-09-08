#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,res;
    while(cin >> n && n){
        res = 0;
        while(n--){
            int c,v;
            cin >> c >> v;
            res +=v/2;
        }
        cout << res/2 << endl;
    }

}
