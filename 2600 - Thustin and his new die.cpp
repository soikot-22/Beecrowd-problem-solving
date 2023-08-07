#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int di[10];
        int hsh[100000]={0};
        for(int i=1; i<=6; i++){
            cin >> di[i];
            hsh[di[i]]++;
        }
        int flag=1;
        for(int i=1; i<=6; i++){
            if(hsh[i]==1) flag=1;
            else{
                flag=0;
                break;
            }
        }
        if(flag){
            if((di[1]+di[6]==7) && (di[2]+di[4]==7) && (di[3]+di[5]==7)){
                cout << "SIM"<<endl;
            }
            else cout << "NAO" << endl;
        }
        else cout << "NAO" << endl;
    }
}
