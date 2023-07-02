#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    while(cin>>a>>b>>c){
        if(a==0 && b==0 && c==0) break;
        d=a*b*c;
        int res=pow(d,0.333333333333);
        cout<<res<<endl;
    }
}
