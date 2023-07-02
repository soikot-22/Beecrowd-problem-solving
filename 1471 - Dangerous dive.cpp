#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,R;
    while(cin>>N>>R){
        int ar[N+2]={0};
        int x;
        for(int i=1; i<=R; i++){
            cin>>x;
            ar[x]++;
        }
        int ct=0;
        for(int i=1; i<=N; i++){
            if(ar[i]==0){
                cout<<i;
                ct++;
                if(ct>0) cout<<" ";
            }
        }
        if(ct>0) cout<<endl;
        else if(ct==0) cout<<"*"<<endl;
    }
}
