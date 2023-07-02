#include<stdio.h>
int main(){
    char ch='%';
    float X,E1,E2,E3,E4,E5,S1,S2,S3,S4,S5;
    scanf("%f",&X);

    if(0<=X && X<=400.00){
        E1=X*0.15;
        S1=E1+X;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %c\n",S1,E1,ch);
    }

    if(400.01<=X && X<=800.00){
        E2=X*0.12;
        S2=E2+X;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %c\n",S2,E2,ch);
    }

    if(800.01<=X && X<=1200.00){
        E3=X*0.10;
        S3=E3+X;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %c\n",S3,E3,ch);
    }

    if(1200.01<=X && X<=2000.00){
        E4=X*0.07;
        S4=E4+X;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %c\n",S4,E4,ch);
    }

    if(X>2000.00){
        E5=X*0.04;
        S5=E5+X;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %c\n",S5,E5,ch);
    }

    return 0;
}
