#include <stdio.h>
#include <math.h>
int main(){

    unsigned long long a,b,sDiff;
    while(scanf("%llu %llu",&a,&b)!=EOF){
        if(a>b){
            printf("%llu\n",a-b);
        }
        else{
            printf("%llu\n",b-a);
        }
    }

return 0;
}
