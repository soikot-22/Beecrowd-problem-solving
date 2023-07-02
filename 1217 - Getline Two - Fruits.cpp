#include <bits/stdc++.h>
using namespace std;
int main(){
    double t;
    double total_kg=0.0,total_price=0.0;
    cin >> t;
    for(int j=1; j<=t; j++){
        double price;
        string s;
        cin >> price;
        cin.ignore();
        getline(cin,s);
        int fruits=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]==' ' && s[i] != '\0'){
                fruits++;
            }
        }
        fruits ++;
        total_kg +=fruits;
        total_price +=price;
        cout<<"day "<< j << ": " << fruits <<" kg"<<endl;
    }
    cout<<fixed << setprecision(2);
    cout<< total_kg/t << " kg by day" << endl;
    cout<<"R$ " << total_price/t << " by day" << endl;

}
