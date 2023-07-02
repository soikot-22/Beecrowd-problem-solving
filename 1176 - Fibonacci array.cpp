#include <stdio.h>
int main(){
    long long int Array[100];
    int n,a,i;
    Array[0]=0;
    Array[1]=1;
    for(i=2;i<100;i++){
        Array[i]=Array[i-1]+Array[i-2];
    }
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        printf("Fib(%d) = %lld\n",a,Array[a]);
    }
return 0;
}
