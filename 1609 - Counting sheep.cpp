#include <stdio.h>
#include <string.h>
int main(){
    int t,n,i,j,k,l,Duplicate=0,Count;

    scanf("%d",&t);
    for(i=0; i<t; i++){
        scanf("%d",&n);
        int num[n];
        for(j=0; j<n; j++){
            scanf("%d",&num[j]);
        }
        Duplicate=0;
        for(k=0; k<n; k++){
            for(l=k+1; l<n; l++){
                if(num[k]==num[l]){
                    Duplicate++;
                    break;
                }
            }
        }
        Count= n - Duplicate;
        printf("%d\n",Count);
        Duplicate=0;
    }

return 0;
}
