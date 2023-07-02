#include <bits/stdc++.h>
using namespace std;
int main(){
    int L,C;
    cin>>L>>C;
    int type1 = (L*C)+(L-1)*(C-1);
    int type2 = (L-1)*2 + (C-1)*2;
    cout<<type1<<endl<<type2<<endl;
}
