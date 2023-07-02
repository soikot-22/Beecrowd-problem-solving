#include<stdio.h>
int main(){
    char name[10];
    double a,b,salary;
    scanf("%s%lf%lf",&name,&a,&b);
    salary = a+(b*0.15);
    printf("TOTAL = R$ %.2lf\n",salary);
return 0;
}
