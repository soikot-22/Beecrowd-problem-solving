#include <stdio.h>
int main(){
    int a,n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a);
        if(a==0)
            printf("NULL\n");
        else if(a>0){
            if(a%2==0)
                printf("EVEN POSITIVE\n");
            if(a%2==1)
                printf("ODD POSITIVE\n");

        }
        else if(a<0){
            if(a%2==0)
                printf("EVEN NEGATIVE\n");
            else
                printf("ODD NEGATIVE\n");
        }
    }

return 0;
}
