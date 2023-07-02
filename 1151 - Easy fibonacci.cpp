#include<stdio.h>
int main(){
    int num[1000],n,i;
    scanf("%d",&n);

    num[0]=0;
    num[1]=1;

    for(i=2;i<n;i++){
        num[i]= num[i-1]+num[i-2];
    }
    printf("0");
    for(i=1;i<n;i++){
        printf(" %d",num[i]);
    }
    printf("\n");
    return 0;
}
