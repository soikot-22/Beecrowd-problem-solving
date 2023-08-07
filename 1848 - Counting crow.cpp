#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    int total = 0,ct=1;
    while(1){
        getline(cin,str);
        if(str=="caw caw"){
            cout << total << endl;
            total = 0;
            ct++;
            if(ct>3) break;
        }
        else{
            if(str=="--*") total +=1;
            else if(str=="-*-") total +=2;
            else if(str=="-**") total +=3;
            else if(str=="*--") total +=4;
            else if(str=="*-*") total +=5;
            else if(str=="**-") total +=6;
            else if(str=="***") total +=7;
        }
    }
}
