#include <bits/stdc++.h>
using namespace std;
int main(){
    char n;
    string number;
    while(cin>>n>>number){
        int ct=0;
        if(n=='0' && number[0]=='0') break;
        else{
            for(int i=0; i<number.size(); i++){
                if(number[i]=='0'){
                    if(ct!=0){
                        cout<<number[i];
                    }
                }
                else if(number[i]!=n){
                   cout<<number[i];
                   ct++;
                }
            }
        }
        if(ct==0) cout<<"0"<<endl;
        else cout<<endl;
    }
}
