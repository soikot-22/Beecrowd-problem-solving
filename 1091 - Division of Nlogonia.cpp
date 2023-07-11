#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    while(cin >> t && t!=0){
        int x,y;
        cin >> x >> y;
        int p1,p2;
        for(int i=0; i<t; i++){
            cin >> p1 >> p2;
            if(x<p1 && y<p2){
                cout << "NE" << endl;
            }
            else if(x<p1 && y>p2){
                cout << "SE" << endl;
            }
            else if(x>p1 && y<p2){
                cout << "NO" << endl;
            }
            else if(x>p1 && y>p2){
                cout << "SO" << endl;
            }
            else {
                cout << "divisa" << endl;
            }
        }

    }
}

