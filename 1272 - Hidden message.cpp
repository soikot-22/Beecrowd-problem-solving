#include <stdio.h>
#include <string.h>
int main(){
    char str[55];
    int n,i;
    scanf("%d",&n);
    while(n--){
        scanf(" %[^\n]s",str);
        if((str[0]>='a' && str[0]<='z') || str[0]>='A' && str[0]<='Z'){
                printf("%c",str[0]);
            }
        for(i=0; i<strlen(str)-1; i++){
            if(str[i]==' '){
                if((str[i+1]>='a' && str[i+1]<='z') || str[i+1]>='A' && str[i+1]<='Z'){
                printf("%c",str[i+1]);
                }
            }
        }
        printf("\n");
    }
return 0;
}
