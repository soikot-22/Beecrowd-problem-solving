#include <stdio.h>

int main() {
    int x;
    scanf("%d",&x);
    printf("%d:",x/3600);
    x=x%3600;
    printf("%d:",x/60);
    x=x%60;
    printf("%d\n",x);
return 0;
}
