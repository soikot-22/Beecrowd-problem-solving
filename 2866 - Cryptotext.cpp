#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        char str[1000];
        scanf(" %[^\n]", str);
        for(j=strlen(str)-1; j>=0; j--){
            if(str[j]>='a' && str[j]<='z'){
                printf("%c",str[j]);
            }
        }
        printf("\n");
    }
return 0;
}
