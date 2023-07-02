#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int hsh[N];
int fibo[N];
int fnot[N];

int main(){
    fibo[0]=0,fibo[1]=1;
    for(int i=2; i<N; i++){
        fibo[i]=fibo[i-1]+fibo[i-2];
        hsh[fibo[i]]++;
    }
    for(int i=1; i<N; i++){
        if(hsh[i]==0){
            fnot[i]=i;
        }
    }
    int n;
    cin>>n;
    cout<<fnot[n]<<endl;
}
