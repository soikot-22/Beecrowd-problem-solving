#include <stdio.h>
int main(){
    int t,p,i,j;
    scanf("%d",&t);
    for(i=0; i<t; i++){
        scanf("%d",&p);
        int age[p];
        for(j=0; j<p; j++){
            scanf("%d",&age[j]);
        }
        printf("Case %d: %d\n",i+1,age[(p-1)/2]);
    }

return 0;
}
