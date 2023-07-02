#include <stdio.h>
int main(){

    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);

    printf("A = %d, B = %d, C = %d\n",A,B,C);
    printf("A = %10d, B = %10d, C = %10d\n",A,B,C);    //%10d to print 10 spaces before the number
    printf("A = %010d, B = %010d, C = %010d\n",A,B,C); //%.10d to print 10 Zeros before the number
    printf("A = %-10d, B = %-10d, C = %-10d\n",A,B,C); //%-10d to print 10 spaces after the number

    return 0;
}
