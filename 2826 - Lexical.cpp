#include <stdio.h>
#include <string.h>
int main(){
    char str1[30];
    char str2[30];
    int i,j,tmp;
    scanf("%s %s",str1,str2);
    for(i=0; i<strlen(str1); i++){
        for(j=i+1; j<strlen(str1); j++){
            if(str1[i]>str1[j]){
                tmp=str1[i];
                str1[i]=str1[j];
                str1[j]=tmp;
            }
        }
    }
    for(i=0; i<strlen(str2); i++){
        for(j=i+1; j<strlen(str2); j++){
            if(str2[i]>str2[j]){
                tmp=str2[i];
                str2[i]=str2[j];
                str2[j]=tmp;
            }
        }
    }
    if(strcmp(str1,str2)>0){
        printf("%s\n%s\n",str2,str1);
    }
    else if(strcmp(str1,str2)<0){
        printf("%s\n%s\n",str1,str2);
    }

return 0;
}
