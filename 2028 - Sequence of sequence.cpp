#include <stdio.h>
int main(){
    int n,count,i=0;
    while(scanf("%d",&n)!=EOF){
        count=1;
        i++;
        count +=((n*(n+1))/2);
        if(n==0){
            printf("Caso %d: %d numero\n",i,count);
            printf("0\n\n");
        }
        else{
            printf("Caso %d: %d numeros\n",i,count);
            printf("0");
            for(int i=1; i<=n; i++){
                for(int j=1; j<=i; j++){
                    printf(" %d",i);
                }
            }
            printf("\n\n");
        }
    }

return 0;
}
