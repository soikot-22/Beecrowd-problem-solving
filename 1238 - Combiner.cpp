#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s1,s2;
        cin >> s1 >> s2;
        if(s1.size() >= s2.size()){
            for(int i=0; i<s1.size(); i++){
                if(i < s1.size()){
                    cout << s1[i];
                }
                if(i < s2.size()){
                    cout << s2[i];
                }
            }
        }
        else{
            for(int i=0; i<s2.size(); i++){
                if(i < s1.size()){
                    cout << s1[i];
                }
                if(i < s2.size()){
                    cout << s2[i];
                }
            }
        }
        cout << endl;

    }
}
