#include<stdio.h>
int main(){
    int N,K,i,j,code;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&K);
        for(j=0;j<K;j++){
            scanf("%d",&code);
            if(code==1) printf("Rolien\n");
            if(code==2) printf("Naej\n");
            if(code==3) printf("Elehcim\n");
            if(code==4) printf("Odranoel\n");
        }
    }

return 0;
}
