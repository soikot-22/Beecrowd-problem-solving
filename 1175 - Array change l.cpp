#include <bits/stdc++.h>
using namespace std;
int main(){
    int N[20];
    for(int i=0; i<20; i++){
        cin>>N[i];
    }
    for(int i=0,j=19; i<20,j>=0; i++,j--){
        cout<<"N["<<i<<"] = "<<N[j]<<endl;
    }
}
