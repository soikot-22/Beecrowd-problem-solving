#include <stdio.h>
#include <string.h>
int main(){
    char character[]="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    char ch;
    while(scanf("%c",&ch)!=EOF){
            for(int i=0; i<48; i++){
                if(ch==' '){
                    printf(" ");
                    break;
                }
                else if(ch==character[i]){
                    printf("%c",character[i-1]);
                    break;
                }
                else if(ch=='\n'){
                    printf("\n");
                    break;
                }
            }
    }

return 0;
}
