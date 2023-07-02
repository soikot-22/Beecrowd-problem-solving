#include <stdio.h>
int main(){
    int i,n,a,total=0,total1=0,total2=0,total3=0;
    char ch,ch1='%';
    float p1,p2,p3;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %c",&a,&ch);

        if(ch=='C')
            total1=total1+a;
        if(ch=='R')
            total2=total2+a;
        if(ch=='S')
            total3=total3+a;

    total=total1+total2+total3;
    }

    p1=((float)total1/total*100);
    p2=((float)total2/total*100);
    p3=((float)total3/total*100);
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",total1);
    printf("Total de ratos: %d\n",total2);
    printf("Total de sapos: %d\n",total3);
    printf("Percentual de coelhos: %0.2f %c\n",p1,ch1);
    printf("Percentual de ratos: %0.2f %c\n",p2,ch1);
    printf("Percentual de sapos: %0.2f %c\n",p3,ch1);
return 0;
}
