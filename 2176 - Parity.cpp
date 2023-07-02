#include <stdio.h>
#include <string.h>
int main(){
    char num[105];
    int count=0;
    scanf("%s",num);
    for(int i=0; i<strlen(num); i++){
        if(num[i]=='1'){
            count++;
        }
    }
    if(count%2==0){
        printf("%s",num);
        printf("0\n");
    }
    else{
        printf("%s",num);
        printf("1\n");
    }

return 0;
}
