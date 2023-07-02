#include <stdio.h>
int main(){
    double M[12][12],sum=0.0;
    int i,j,n=1,m=11;
    char ch;
    scanf("%c",&ch);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&M[i][j]);
        }
    }
    for(i=0;i<5;i++){
        for(j=n;j<m;j++){
            sum=sum+M[i][j];
        }
        n++;
        m--;
    }
    if(ch=='S') printf("%.1lf\n",sum);
    else if(ch=='M') printf("%.1lf\n",sum/30);


return 0;
}
