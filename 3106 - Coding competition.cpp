#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a, total = 0;
    for(int i=0; i<n; i++){
        cin >> a;
        total += a/3;

    }
    cout << total*3 << endl;
    return 0;
}
