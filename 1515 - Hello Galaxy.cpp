#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin>>n && n!=0){
        string s,planet;
        int year,time;
        int first=10000;
        for(int i=0; i<n; i++){
            cin>>s>>year>>time;
            if(first>(year-time)){
                first=year-time;
                 planet=s;
            }
        }
        cout<<planet<<endl;
    }
}
