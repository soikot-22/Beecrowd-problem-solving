#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    while(cin >> t){
        if(t==0) break;
        int ct=0;
        while(1){
            int n,flag = 0;
            int a[t+5];
            for(int i=1; i<=t; i++){
                cin >> a[i];
                if(a[i]!=i) flag = 1;
            }
            ct++;
            if(flag==0) break;

        }
        cout << ct << endl;
    }
}
