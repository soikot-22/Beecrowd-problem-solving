#include <stdio.h>
int main(){
    int a,b,i;
    scanf("%d %d",&a,&b);
    int sum=0;
    if(b>a){
        for(i=a; i<=b; i++){
            if(i%13!=0)
            sum=sum+i;
        }
    }
    if(a>b){
        for(i=b;i<=a;i++){
        if(i%13!=0)
            sum=sum+i;
        }
    }
    printf("%d\n",sum);

	return 0;
}
