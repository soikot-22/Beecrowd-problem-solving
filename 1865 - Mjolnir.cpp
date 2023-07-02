#include <stdio.h>
#include <string.h>
int main ()
{
    int i,n,x;
    char str[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s %d",&str,&x);

        if(str[0]=='T' && str[1]=='h' && str[2]=='o' && str[3]=='r'){
            printf("Y\n");
        }
        else
            printf("N\n");

    }

  return 0;
}
