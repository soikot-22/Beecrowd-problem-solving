#include <stdio.h>
int main(){
    int t,days;
    double food_available;
    scanf("%d",&t);
    while(t--){
        scanf("%lf",&food_available);
        days=0;
        double temp=food_available;
        while(temp>1){
            temp /=2.0;
            days++;
        }
        printf("%d dias\n",days);
    }
return 0;
}
