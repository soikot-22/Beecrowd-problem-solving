#include<stdio.h>
int main(){
    int n,i;
    float x,fastest_attempt;

    while(scanf("%d",&n) !=EOF){

    fastest_attempt=100;
    for(i=0;i<n;i++){
            scanf("%f",&x);

        if(x<fastest_attempt)
            fastest_attempt=x;
    }
    printf("%.2f\n",fastest_attempt);
    }

return 0;
}
