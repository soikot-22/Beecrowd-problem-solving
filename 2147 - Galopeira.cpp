#include<stdio.h>
#include<string.h>
int main(){
    char str[10001];
    int n,i,stringlen;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%s",str);
        stringlen=strlen(str);
        printf("%.2f\n",stringlen / 100.0);
    }

return 0;
}
