#include <stdio.h>
int main(){
    int a,b,i,j;
    scanf("%d %d",&a,&b);
    b=b-(b%a);
    for(i=1;i<b;i +=a){
            printf("%d",i);
        for(j=i+1;j<(i+a);j++){
            printf(" %d",j);
        }
        printf("\n");
    }

return 0;
}
