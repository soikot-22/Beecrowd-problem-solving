#include <stdio.h>
#include <math.h>

int main() {
    double x1,y1,x2,y2,dis;
    scanf("%lf%lf",&x1,&y1);
    scanf("%lf %lf",&x2,&y2);
    dis=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    double res=sqrt(dis);
    printf("%.4lf\n",res);
return 0;
}
