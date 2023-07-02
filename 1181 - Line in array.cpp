#include <stdio.h>
int main(){
    double arr[12][12], sum=0.0;
    int a,i,j;
    char ch;
    scanf("%d %c",&a,&ch);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&arr[i][j]);
        }
    }
    for(i=0;i<12;i++){
        sum=sum + arr[a][i];
    }
    if(ch=='S') printf("%.1lf\n",sum);
    else if(ch=='M') printf("%.1lf\n",sum/12);


return 0;
}
