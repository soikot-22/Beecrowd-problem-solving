#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,sum=0;
        cin>>n;
        for(int i=0; i<n; i++){
            sum +=pow(2,i);
        }
        cout<< sum << endl;
    }
}
