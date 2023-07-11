#include <bits/stdc++.h>
using namespace std;

void minutes(int H1,int M1, int H2, int M2){
    if(H1<H2){
        cout << (H2*60+M2) - (H1*60+M1) << endl;
    }
    else if(H1>H2){
        cout << ((24*60)-(H1*60+M1)) + (H2*60+M2) << endl;
    }
    else if(H1==H2){
        if(M1<M2){
            cout << (M2-M1) << endl;
        }
        else if(M1>M2){
            cout << ((24*60)-(H1*60+M1)) + (H2*60+M2) << endl;
        }
    }

}

int main(){
    int H1,M1,H2,M2;
    while(cin >> H1 >> M1 >> H2 >> M2){
        if(H1==0 && M1==0 && H2==0 && M2==0) break;
        minutes(H1,M1,H2,M2);

    }
}
