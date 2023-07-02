#include <bits/stdc++.h>
using namespace std;
int main(){
    double n;
    while(cin>>n){
        if(n==0) break;
        cout<<"Brasil "<<(int)floor((n*1)/90)<<" x "<<"Alemanha "<<(int)ceil((n*7)/90)<<endl;
    }
}
