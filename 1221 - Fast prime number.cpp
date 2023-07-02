#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,flag=1;
        cin >> n;
        if(n==0 || n==1){
            cout << "Not Prime" << endl;
            continue;
        }
        for(int i=2; i*i<=n; i++){
            if(n % i == 0){
                flag = 0;
                break;
            }
        }
        if(flag==1) cout << "Prime" << endl;
        else cout << "Not Prime" << endl;
    }
}
