#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;
    while(cin>>n && n){
        cin >> a >> b;
        int lcm=(a*b)/(__gcd(a,b));
        int res = (n/a) + (n/b) - (n/lcm);
        cout << res << endl;
    }
}
