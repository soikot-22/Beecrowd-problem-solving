#include <stdio.h>
int main(){
    int n,i,j,num,pos=0,Count=0;

    while(scanf("%d",&n)){
        if(n==0) break;
        for(i=0; i<n; i++){
            for(j=0; j<5; j++){
                scanf("%d",&num);
            if(num<=127){
                pos=j;
                Count++;
            }
        }
        if(Count==0 || Count>1){
            printf("*\n");
        }
        else{
            printf("%c\n",65+pos);
        }
        Count=0,pos=0;
        }
    }

return 0;
}
