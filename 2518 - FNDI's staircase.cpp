#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,H,C,L;
    while(cin>>N>>H>>C>>L){
        double hypotenuse =sqrt((H/100.0)*(H/100.0)+(C/100.0)*(C/100.0));
        double recL = hypotenuse*N;
        cout<< fixed << setprecision(4);
        cout<<(recL*(L/100.0))<<endl;
    }

}
