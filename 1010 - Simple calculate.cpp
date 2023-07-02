#include <stdio.h>

int main() {
    int pc1,pc2,pu1,pu2;
    double price1,price2;
    scanf("%d%d",&pc1,&pu1);
    scanf("%lf",&price1);
    scanf("%d%d",&pc2,&pu2);
    scanf("%lf",&price2);
    double totalprice =(pu1*price1)+(pu2*price2);
    printf("VALOR A PAGAR: R$ %.2lf\n",totalprice);
return 0;
}
