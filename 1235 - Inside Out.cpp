#include <stdio.h>
#include <string.h>
int main(){
    char str[105];
    int n,i;
    scanf("%d",&n);
    while(n--){
        scanf(" %[^\n]s",str);
        int len = strlen(str);
        if(len%2==1){
          for(i=len/2; i>=0; i--){
            printf("%c",str[i]);
          }
          for(i=len-1; i>=len/2; i--){
            printf("%c",str[i]);
          }
        }
        else{
          for(i=(len/2)-1; i>=0; i--){
            printf("%c",str[i]);
          }
          for(i=len-1; i>=(len/2); i--){
            printf("%c",str[i]);
          }
        }

        printf("\n");
    }

return 0;
}
