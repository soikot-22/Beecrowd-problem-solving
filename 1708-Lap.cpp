#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    while(cin >> x >> y){
        int first = 2*x;
        int second = y;
        int pos=0;
        for(int i=1; i<=10000; i++){
            if(second>=first){
                pos=i;
                break;
            }
            first +=x;
            second +=y;
        }
        cout << pos+1 << endl;
    }
}
