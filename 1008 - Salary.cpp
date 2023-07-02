#include <stdio.h>

int main() {
    int  en,wpm;
    scanf("%d%d",&en,&wpm);

    double sph,salary;
    scanf("%lf",&sph);

    salary= wpm*sph;
    printf("NUMBER = %d\n",en);
    printf("SALARY = U$ %.2lf\n",salary);
return 0;
}
