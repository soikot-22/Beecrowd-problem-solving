#include <stdio.h>
#include <string.h>
int main(){
    int n,i,sum=0;
    while(scanf("%d",&n)!=EOF){
        char str[n];
        scanf("%s",&str);
        sum=0;
        for(i=0;i<strlen(str);i++){
        sum=sum+(str[i]-48);
        }
    printf("%d ",sum);
    if(sum%3==0) printf("sim\n");
    else printf("nao\n");
    }

return 0;
}

