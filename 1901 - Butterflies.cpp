#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ar[n][n];
    int hsh[1005]={0};
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> ar[i][j];
        }
    }
    int a,b;
    for(int i=0; i<n*2; i++){
        cin >> a >> b;
        hsh[ar[a-1][b-1]]++;
    }
    int ct=0;
    for(int i=0; i<1005; i++){
        if(hsh[i]>=1){
            ct++;
        }
    }
    cout << ct << endl;
}
