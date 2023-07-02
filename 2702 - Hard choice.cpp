#include <stdio.h>
int main(){
    int Ca,Ba,Pa,Cr,Br,Pr,res1,res2,res3,totalresult;
    scanf("%d %d %d",&Ca,&Ba,&Pa);
    scanf("%d %d %d",&Cr,&Br,&Pr);

    if(Cr>=Ca){
       res1=Cr-Ca;
    }
    if(Br>=Ba){
        res2=Br-Ba;
    }
    if(Pr>=Pa){
        res3=Pr-Pa;
    }

    totalresult = res1+res2+res3;
    printf("%d\n",totalresult);

return 0;
}
