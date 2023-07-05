#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s1,s2;
        cin >> s1 >> s2;
        int ct=0;
        for(int i=0; i<s1.size(); i++){
            if(s1[i]<s2[i] || s1[i]==s2[i]){
                ct +=((s2[i]-'a')-(s1[i]-'a'));
            }
            else{
                ct += (26-(s1[i]-'a')+(s2[i]-'a'));
            }
        }
        cout << ct << endl;
    }
}
