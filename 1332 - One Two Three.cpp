#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        if(str=="one" || (str[0]=='o' && str[1]=='n') || (str[0]=='o' && str[2]=='e') || (str[1]=='n' && str[2]=='e')){
            cout<<"1"<<endl;
        }
        else if(str=="two" || (str[0]=='t' && str[1]=='w') || (str[0]=='t' && str[2]=='o') || (str[1]=='w' && str[2]=='o')){
            cout<<"2"<<endl;
        }
        else if (str.size()==5) cout<<"3"<<endl;
    }

}
