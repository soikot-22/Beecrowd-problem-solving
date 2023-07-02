#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    while(b--){
        string action;
        cin>>action;
        if(action=="fechou") a+=1;
        else if(action=="clicou") a-=1;
    }
    cout<<a<<endl;
}
