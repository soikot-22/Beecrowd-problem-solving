#include <stdio.h>
int main(){
    unsigned long long int n,rem,rev=0;
    scanf("%llu",&n);
    if(n%10==0) printf("0");
    while(n!=0){
        rem = n%10;
        rev = (rev*10)+rem;
        n /=10;
    }
    printf("%llu",rev);

return 0;
}
