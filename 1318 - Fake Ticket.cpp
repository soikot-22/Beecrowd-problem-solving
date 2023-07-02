#include <stdio.h>
int main(){
    int N,M,T,i,j,Duplicate;
    while(scanf("%d %d",&N,&M)!=EOF){
        if(N==0 && M==0) break;
        int arr[10000]={0};
        for(i=1; i<=M; i++){
            scanf("%d",&T);
            arr[T]++;
        }
        Duplicate=0;
        for(i=0; i<=N; i++){
            if(arr[i]>1){
                Duplicate++;
            }
        }

        printf("%d\n",Duplicate);
    }

return 0;
}
