#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,rem;
    scanf("%d",&t);
    long long int n;
    while(t--){
        scanf("%lld",&n);
        rem = n%4;
        if(rem==0) printf("1\n");
        else if(rem==1) printf("7\n");
        else if(rem==2) printf("9\n");
        else if(rem==3) printf("3\n");
    }
}
