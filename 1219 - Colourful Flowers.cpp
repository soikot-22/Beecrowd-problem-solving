#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926535897
int main(){
    double a,b,c;
    while(cin >> a >> b >> c){
        double s = (a+b+c)/2.0;
        double A_triangle = sqrt(s*(s-a)*(s-b)*(s-c));
        double circle_Radius = (a * b *c) / (4*A_triangle);
        double A_Big_circle = pi * circle_Radius * circle_Radius;
        double A_small_circle = pi * (A_triangle/s) * (A_triangle/s);
        cout << fixed << setprecision(4);
        cout << A_Big_circle - A_triangle << " " << A_triangle - A_small_circle << " " << A_small_circle << endl;
    }
}
