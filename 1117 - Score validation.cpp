#include<stdio.h>
int main(){
    float num,sum=0;
    int n,i,j,count=0;

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
            break;
        }
    }

return 0;
}
