#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    while(cin >> n >> k && n!=0 && k!=0){
        int ar[n];
        int fr[105]={0};
        for(int i=0; i<n; i++){
            cin >> ar[i];
            fr[ar[i]]++;
        }
        int ct=0;
        for(int i=0; i<100; i++){
            if(fr[i]>=k){
                ct++;
            }
        }
        cout << ct << endl;
    }
}
