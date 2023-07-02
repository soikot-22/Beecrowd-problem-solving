#include <stdio.h>
int main(){
    double arr[12][12], sum=0.0;
    int i,j;
    char ch;
    scanf("%c",&ch);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&arr[i][j]);
        }
    }
    for(i=1;i<=11;i++){
        for(j=0;j<i;j++){
            sum=sum+arr[i][j];
        }
    }
    if(ch=='S') printf("%.1lf\n",sum);
    else if(ch=='M') printf("%.1lf\n",sum/66);


return 0;
}
