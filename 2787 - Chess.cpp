#include<stdio.h>
int main(){
    int L,C,SUM;
    scanf("%d%d",&L,&C);
    SUM=L+C;
    SUM=SUM%2;

    if(SUM==0){
        if(1<=C || C<=1000){
           printf("1\n");
        }
    }

    if(SUM>0){
        if(1<=C || C<=1000){
           printf("0\n");
        }
    }

    return 0;
}
