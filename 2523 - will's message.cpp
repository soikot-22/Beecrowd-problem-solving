#include <stdio.h>
#include <string.h>
int main(){
    char str[30];
    int n,i,num;
    while(scanf("%s",str)!= EOF){
        scanf("%d",&n);
        for(i=0; i<n; i++){
            scanf("%d",&num);
            printf("%c",str[num-1]);
        }
        printf("\n");
    }

return 0;
}
