#include <stdio.h>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,i;
    scanf("%d",&t);
    string str;
    while(t--){
        cin>>str;
        int count=0;
        for(i=0; i<str.length(); i++){
            if(str[i]=='1') count +=2;
            else if(str[i]=='4') count +=4;
            else if(str[i]=='2' || str[i]=='3' || str[i]=='5') count +=5;
            else if(str[i]=='6' || str[i]=='9' || str[i]=='0') count +=6;
            else if(str[i]=='7') count +=3;
            else if(str[i]=='8') count +=7;
        }
        printf("%d leds\n",count);
    }


return 0;
}
