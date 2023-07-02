#include <stdio.h>
#include <string.h>
int main(){
    int i,j,n;
    char str1[10000],str2[10000];
    scanf("%d ",&n);
    while(n--){
        gets(str1);
        int len = strlen(str1);
        for(i=0; i<len; i++){
            if((str1[i]>='a' && str1[i]<='z') || (str1[i]>='A' && str1[i]<='Z')){
               str1[i]=str1[i]+3;
            }
        }
        for(j=0,i=len-1; i>=0; i--,j++){
            str2[j]=str1[i];
        }
        str2[j]='\0';
        for(i=len/2; i<len; i++){
            str2[i]=str2[i]-1;

        }
        printf("%s\n",str2);
    }

return 0;
}
