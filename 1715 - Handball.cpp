#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,M;
    cin>>N>>M;
    int arr[N][M];
    int goal=0;
    for(int i=0; i<N; i++){
        int ct=0;
        for(int j=0; j<M; j++){
            cin>>arr[i][j];
            if(arr[i][j]>0) ct++;
        }
        if(ct==M){
            goal++;
        }
    }
    cout<<goal<<endl;

}
