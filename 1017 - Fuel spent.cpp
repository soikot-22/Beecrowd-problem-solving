#include <stdio.h>

int main() {
    int kmh,hour;
    scanf("%d%d",&hour,&kmh);
    double fuel=(hour*kmh);
    double res=fuel/12;
    printf("%.3lf\n",res);
return 0;
}
