#include <bits/stdc++.h>
using namespace std;
int main(){
    double volume,diameter;
    while(cin>>volume>>diameter){
        double height = volume/(3.14*(diameter/2)*(diameter/2));
        double area = 3.14*(diameter/2)*(diameter/2);
        cout << fixed << setprecision(2);
        cout<<"ALTURA = "<<height<<endl;
        cout<<"AREA = "<<area<<endl;
    }
}
