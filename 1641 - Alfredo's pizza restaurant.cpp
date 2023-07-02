#include <bits/stdc++.h>
using namespace std;
int main(){
    int R,W,L,i=0;
    while(cin>>R){
        i++;
        if(R==0) break;
        else{
            cin>>W>>L;
            if(sqrt((L*L)+(W*W))<=(2*R)) cout<<"Pizza "<< i <<" fits on the table."<<endl;
            else cout<<"Pizza "<< i <<" does not fit on the table."<<endl;
        }
    }
}
