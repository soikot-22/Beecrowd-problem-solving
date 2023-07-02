#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        float avg=0;
        for(int i=0; i<n; i++){
            cin>>ar[i];
            avg +=ar[i];
        }
        avg = avg/n;
        float above_avg=0;
        for(int i=0; i<n; i++){
            if(ar[i]>avg){
                above_avg++;
            }
        }
        double res = (above_avg/n)*100.00;
        cout<<fixed<<setprecision(3);
        cout<<res<<"%"<<endl;
    }
}
