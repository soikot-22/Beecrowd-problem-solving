#include <stdio.h>
int main(){
    int a,b,c;

    while(scanf("%d %d %d",&a,&b,&c)!=EOF){
        if((a==0 && b==0 && c==0) || (a==1 && b==1 && c==1)){
            printf("*\n");
        }
        else if(a==b && b!=c){
            printf("C\n");
        }
        else if(a==c && c!=b){
            printf("B\n");
        }
        else if(b==c && c!=a){
            printf("A\n");
        }
    }


return 0;
}
