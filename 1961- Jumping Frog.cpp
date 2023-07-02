#include <stdio.h>
#include <math.h>
int main(){
    int P,N,i,diff,flag=0;
    scanf("%d %d",&P,&N);
    int a[N];
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<N-1;i++){
        diff=abs(a[i]-a[i+1]);
        if(diff>P){
            printf("GAME OVER\n");
            flag++;
            break;
        }
    }
    if(flag==0) printf("YOU WIN\n");


return 0;
}
