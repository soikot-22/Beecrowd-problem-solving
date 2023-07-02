#include <stdio.h>
int prime(int num);
int prime(int n){
    int j,num,flag=1;
    for(int j=2; j<n; j++){
        if(n%j==0){
            flag=0;
            break;
        }
    }
    if(flag==1) printf("%d eh primo\n",n);
    else printf("%d nao eh primo\n",n);
}

int main(){
    int t,num,i,j;
    scanf("%d",&t);
        for(i=0; i<t; i++){
            scanf("%d",&num);
            prime(num);
        }

return 0;
}
