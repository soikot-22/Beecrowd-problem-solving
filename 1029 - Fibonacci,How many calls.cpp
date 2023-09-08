#include <bits/stdc++.h>
using namespace std;

int ct;
int fibo(int n){
    if(n<2){
        ct++;
        return n;
    }
    else{
        ct++;
        return fibo(n-1) + fibo(n-2);
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int res = fibo(n);
        cout << "fib("<< n <<") = " <<ct-1 <<" calls = "<<res << endl;
        ct = 0;
    }
}
