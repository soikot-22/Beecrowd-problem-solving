#include<stdio.h>
#include<string.h>

int main(){
    char str[10000];
    while(fgets(str,10000,stdin))
    {
        int length=strlen(str);
        for(int i=0;i<length-1;i++){
            if((str[i]==' ')  && (str[i+1]==',' || str[i+1]=='.')){
                i++;
            }
            printf("%c",str[i]);
        }
        printf("\n");
    }
    return 0;
}
