#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    double services_attempt=0,blocks_attempt=0,attacks_attempt=0;
    double service_success=0,blocks_success=0,attacks_success=0;
    while(n--){
        string s;
        double s1,b1,a1,s2,b2,a2;
        cin>>s;
        cin>>s1>>b1>>a1>>s2>>b2>>a2;
        services_attempt +=s1;
        service_success +=s2;
        blocks_attempt +=b1;
        blocks_success +=b2;
        attacks_attempt +=a1;
        attacks_success +=a2;
    }
    cout<<fixed<<setprecision(2);
    cout<<"Pontos de Saque: "<<(service_success/services_attempt)*100<<" %."<<endl;
    cout<<"Pontos de Bloqueio: "<<(blocks_success/blocks_attempt)*100<<" %."<<endl;
    cout<<"Pontos de Ataque: "<<(attacks_success/attacks_attempt)*100<<" %."<<endl;
}
