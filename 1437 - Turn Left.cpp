#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin >> n && n){
    string s;
    cin >> s;
    int len = s.size();
    int current_dir = 1;  //
        for(int i=0; i<len; i++){
            if(current_dir==1){
                if(s[i]=='D') current_dir = 4;
                else if(s[i]=='E') current_dir = 2;
            }
            else if(current_dir==2){
                if(s[i]=='D') current_dir = 1;
                else if(s[i]=='E') current_dir = 3;
            }
            else if(current_dir==3){
                if(s[i]=='D') current_dir = 2;
                else if(s[i]=='E') current_dir = 4;
            }
            else if(current_dir==4){
                if(s[i]=='D') current_dir = 3;
                else if(s[i]=='E') current_dir = 1;
            }
        }
        if(current_dir==1) cout <<"N"<<endl;
        else if(current_dir==2) cout << "O" << endl;
        else if(current_dir==3) cout << "S" << endl;
        else if(current_dir==4) cout << "L" << endl;
    }
}
