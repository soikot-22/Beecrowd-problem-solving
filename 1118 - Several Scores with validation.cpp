#include<stdio.h>
int main(){
    float num,sum=0;
    int x,count=0;

    while(1){
            count=0,sum=0;
        while(1){
        scanf("%f",&num);
        if(num<0.0 || num>10.00){
            printf("nota invalida\n");
        }
        else {
            sum +=num;
            count++;

        }
        if(count==2){
            printf("media = %.2f\n",sum/2.0);
            printf("novo calculo (1-sim 2-nao)\n");
            break;

        }
        }

        while(scanf("%d",&x)){
            if(x==1 || x==2) break;
            else printf("novo calculo (1-sim 2-nao)\n");
        }
        if(x==1){
            continue;
        }
        else if(x==2){
            break;
        }

    }

return 0;
}
