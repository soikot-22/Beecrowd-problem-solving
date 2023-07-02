#include<stdio.h>
int main(){
    double N1,N2,N3,N4,N5,Avg1,Avg2;
    scanf("%lf%lf%lf%lf",&N1,&N2,&N3,&N4);
    Avg1 =((N1*2)+(N2*3)+(N3*4)+(N4*1))/10;
    printf("Media: %.1lf\n",Avg1);
    if(Avg1>=7.0){
        printf("Aluno aprovado.\n");
    }
    else if(Avg1<5.0){
        printf("Aluno reprovado.\n");
    }
    else if(Avg1>=5.0 && Avg1<=6.9){
        printf("Aluno em exame.\n");
        scanf("%lf",&N5);
        printf("Nota do exame: %.1lf\n",N5);
        Avg2=(Avg1+N5)/2;
        if(Avg2>=5.0){
            printf("Aluno aprovado.\n");
        }
        else if(Avg2<=4.9){
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n",Avg2);
    }
return 0;
}
