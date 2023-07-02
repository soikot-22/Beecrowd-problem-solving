#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    int i;
    while(cin>>str){
        int most_fr[1005]={0};
        for(i=0; i<str.size(); i++){
            int digit=str[i]-'0';
            most_fr[digit]++;
        }
        int m_fr=most_fr[0];
        int pos=0;
        for(i=1; i<10; i++){
            if(most_fr[i]>=m_fr){
                m_fr=most_fr[i];
                pos=i;
            }
        }
        cout<<pos<<endl;
        pos=0;
    }
}
