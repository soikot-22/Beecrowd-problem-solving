#include <stdio.h>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    int i,len,capital,small,digit,spchar;
    while(getline(cin,str)){
        spchar=1;
        capital=small=digit=0;
        len = str.length();
        if(len<6 || len>32){
            cout<<"Senha invalida.\n";
            continue;
        }
        else if(len>=6 && len<=32){
            for(i=0; i<len; i++){
                if(str[i]>=65 && str[i]<=90) capital=1;
                else if(str[i]>=97 && str[i]<=122) small=1;
                else if(str[i]>=48 && str[i]<=57) digit=1;
                else{
                    spchar=0;
                    break;
                }
            }
            if(capital==0 || small==0 || digit==0){
                cout<<"Senha invalida.\n";
            }
           else cout<<"Senha valida.\n";
        }
    }

return 0;
}

