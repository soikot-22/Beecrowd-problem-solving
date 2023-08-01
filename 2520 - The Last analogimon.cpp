#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    while(cin >> n >> m){
    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    int x1,y1,x2,y2;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j]==1){
                x1 = i,y1 = j;
            }
            if(a[i][j]==2){
                x2 = i,y2 = j;
            }
        }
    }
    cout << abs(x1-x2)+abs(y1-y2) << endl;
    }
}
