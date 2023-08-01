#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    while(cin >> t){
        int sz,res,min_set;
        char foot;
        int ar_D[100] = {0};
        int ar_E[100] = {0};

        for(int i=0; i<t; i++){
            cin >> sz >> foot;

            if(foot=='D'){
                ar_D[sz]++;
            }
            if(foot=='E'){
                ar_E[sz]++;
            }
        }
        res = 0,min_set=0;
        for(int i=30; i<70; i++){
            if(ar_D[i]>=ar_E[i] && ar_D[i]>0 && ar_E[i]>0){
                res += (ar_E[i] + (ar_D[i]-(ar_D[i]-ar_E[i])));
            }
            else if(ar_D[i]<=ar_E[i] && ar_D[i]>0 && ar_E[i]>0){
                res += (ar_D[i] + (ar_E[i]-(ar_E[i]-ar_D[i])));
            }
        }
        cout << res/2 << endl;
    }
}
