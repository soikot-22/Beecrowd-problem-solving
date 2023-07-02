#include <stdio.h>
int main(){
    int t,num;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&num);
        if(num%2==0) printf("0\n");
        else printf("1\n");
    }


return 0;
}
