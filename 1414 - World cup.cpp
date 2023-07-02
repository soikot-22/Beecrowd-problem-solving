#include <bits/stdc++.h>
using namespace std;
int main(){
    int pt,mp;
    while(cin>>pt>>mp){
        if(pt==0 && mp==0) break;
        int total_p=0;
        while(pt--){
            string s;
            int point;
            cin>>s>>point;
            total_p +=point;
        }
        cout<<(mp*3)-total_p<<endl;
    }
}
