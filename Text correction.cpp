#include <stdio.h>
#include <string.h>
int main(){
    char str[1000];
    int i;
    while(gets(str)){
        for(i=0; i<strlen(str)-1; i++){
            if(str[i]==' ' && str[i+1]==','){
                i++;
            }
        }
        printf("%s\n",str);
    }

return 0;
}
