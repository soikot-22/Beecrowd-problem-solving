#include <stdio.h>
int main(){
    double M[12][12],sum=0.0;
    int i,j;
    char ch;
    scanf("%c",&ch);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&M[i][j]);
        }
    }
    for(i=1; i<=5; i++){
        for(j=0; j<i; j++){
            sum+=M[i][j];
        }
    }
    int k=2;
    for(i=6; i<=10; i++){
        for(j=0; j<=i-k; j++){
            sum+=M[i][j];
        }
        k+=2;
    }
    if(ch=='S') printf("%.1lf\n",sum);
    else if(ch=='M') printf("%.1lf\n",sum/30);

return 0;
}
