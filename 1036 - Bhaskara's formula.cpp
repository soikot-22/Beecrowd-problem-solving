#include <stdio.h>
#include <math.h>

int main() {
    double A,B,C,R1,R2;
    scanf("%lf%lf%lf",&A,&B,&C);
    R1=(-B+sqrt(B*B-4*A*C))/(2*A);
    R2=(-B-sqrt(B*B-4*A*C))/(2*A);

    if(R1<0 || R1>0 && R2>0 ||	R2<0 && (B*B)>(4*A*C)&& (4*A)!=0){
        printf("R1 = %.5lf\n",R1);
        printf("R2 = %.5lf\n",R2);
    } else{
        printf("Impossivel calcular\n");
    }
return 0;
}
