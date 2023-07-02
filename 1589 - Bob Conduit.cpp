#include <stdio.h>
int main(){
   int T,r1,r2,res,i;
   scanf("%d",&T);
   for(i=0; i<T; i++){
       scanf("%d %d",&r1,&r2);
       res=r1+r2;
       printf("%d\n",res);
   }
return 0;
}
