#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    while(cin >> t){
        while(t--){
            string s;
            cin >> s;
            int len = s.size();
            int sum=0;
            for(int i=len-1,j=0; i>=0,j<len; i--,j++){
                int ch = s[j] - '0';
                sum =sum + ch * pow(2,i);
            }
            printf("%c",sum);
        }
        cout << endl;
    }
}
