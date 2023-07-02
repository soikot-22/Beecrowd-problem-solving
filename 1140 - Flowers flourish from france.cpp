#include <stdio.h>
#include <string.h>
int main(){
    char str[1000];
    int flag,i;
    while(fgets(str,1000,stdin)){
        flag=1;
        if(str[0]=='*') break;

        for(i=0; i<strlen(str); i++){
            if(str[i]==' '){
                if(str[i+1]==str[0] || str[i+1]==str[0]+32 || str[i+1]==str[0]-32){
                    flag=1;
                }
                else{
                   flag=0;
                   break;
                }
            }
        }

        if(flag==0) printf("N\n");
        else if(flag==1) printf("Y\n");

    }

return 0;
}
