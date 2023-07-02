#include <stdio.h>
int main(){
    int velocity,time,result;
    while(scanf("%d %d",&velocity,&time)!=EOF){
        result=time * 2 * velocity;
        printf("%d\n",result);
    }

return 0;
}
