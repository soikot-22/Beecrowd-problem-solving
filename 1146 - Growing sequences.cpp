#include <stdio.h>
int main(){
     int x;
    while(1){
        scanf("%d",&x);
        if(x==0)
            break;
        else{
                printf("1");
            for(int i=2;i<=x;i++){
                printf(" %d",i);
            }
        printf("\n");
        }
    }

return 0;
}
