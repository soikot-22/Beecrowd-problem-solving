#include <bits/stdc++.h>
using namespace std;
int main(){
    int N[1000];
    int n;
    cin>>n;
    int j=0;
    for(int i=0; i<1000; i++){
        cout<<"N["<<i<<"] = "<<j<<endl;
        j++;
        if(j==n) j=0;
    }
}
