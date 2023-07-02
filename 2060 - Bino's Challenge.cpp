#include <stdio.h>
int main(){
    int n,a,i,t1=0,t2=0,t3=0,t4=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a);

        if(a%2==0) t1++;
        if(a%3==0) t2++;
        if(a%4==0) t3++;
        if(a%5==0) t4++;
    }
    printf("%d Multiplo(s) de 2\n",t1);
    printf("%d Multiplo(s) de 3\n",t2);
    printf("%d Multiplo(s) de 4\n",t3);
    printf("%d Multiplo(s) de 5\n",t4);

return 0;
}
