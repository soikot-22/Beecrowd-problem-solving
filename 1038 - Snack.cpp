#include<stdio.h>
int main(){
    int X,Y;
    float Total;
    scanf("%d%d",&X,&Y);
        if(X==1){
            Total=Y*4;
            printf("Total: R$ %.2lf\n",Total);
        }
        if(X==2){
            Total=Y*4.5;
            printf("Total: R$ %.2lf\n",Total);
        }
        if(X==3){
            Total=Y*5;
            printf("Total: R$ %.2lf\n",Total);
        }
        if(X==4){
            Total=Y*2;
            printf("Total: R$ %.2lf\n",Total);
        }
        if(X==5){
            Total=Y*1.5;
            printf("Total: R$ %.2lf\n",Total);
        }

    return 0;
}
