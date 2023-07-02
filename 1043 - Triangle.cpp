#include<stdio.h>
int main() {
    float A,B,C,paremeter,Area;
    scanf("%f%f%f",&A,&B,&C);
    Area=((A+B)/2)*C;
    paremeter =A+B+C;
    if((A+B)>C && (A+C)>B && (B+C)>A){
        printf("Perimetro = %.1f\n",paremeter);
    }
    else {
        printf("Area = %.1f\n",Area);
    }
return 0;
}
