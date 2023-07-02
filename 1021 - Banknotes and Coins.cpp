#include <iostream>

using namespace std;
int main() {
    double N;
    int x,y;
    scanf("%lf",&N);

    x=N;
    y=(N-x)*100;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",x/100);
    x=x%100;
    printf("%d nota(s) de R$ 50.00\n",x/50);
    x=x%50;
    printf("%d nota(s) de R$ 20.00\n",x/20);
    x=x%20;
    printf("%d nota(s) de R$ 10.00\n",x/10);
    x=x%10;
    printf("%d nota(s) de R$ 5.00\n",x/5);
    x=x%5;
    printf("%d nota(s) de R$ 2.00\n",x/2);
    x=x%2;
    printf("MOEDAS:\n");

    printf("%d moeda(s) de R$ 1.00\n",x/1);
    printf("%d moeda(s) de R$ 0.50\n",y/50);
    y=y%50;
    printf("%d moeda(s) de R$ 0.25\n",y/25);
    y=y%25;
    printf("%d moeda(s) de R$ 0.10\n",y/10);
    y=y%10;
    printf("%d moeda(s) de R$ 0.05\n",y/5);
    y=y%5;
    printf("%d moeda(s) de R$ 0.01\n",y/1);
return 0;
}



