#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    while(cin >> x >> y && x && y){
        int c_alice,c_betty;

        int hsh_alice[100005]={0};
        int hsh_betty[100005]={0};

        for(int i=0; i<x; i++){
            cin >> c_alice;
            hsh_alice[c_alice]++;
        }
        for(int j=0; j<y; j++){
            cin >> c_betty;
            hsh_betty[c_betty]++;
        }
        int a=0,b=0,ct=0,j=0;
        for(int i=0; i<100005; i++){
            if(i==j && hsh_alice[i] && hsh_betty[j]){
                ct++;
            }
            if(hsh_alice[i]>0) a++;
            if(hsh_betty[i]>0) b++;
            j++;
        }
        if(a>b) cout << b-ct << endl;
        else cout << a-ct << endl;
    }
}
