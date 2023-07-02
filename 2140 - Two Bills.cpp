#include<stdio.h>
int main()
{
    int a,b,c;
    while(1)
    {
        scanf("%d %d", &a,&b);
        c = b - a;
        if(a==0 && b==0)
            break;
        else if(c==2+5||c==2+10||c==2+20||c==2+50||c==2+100||c==5+10||c==5+20||c==5+50||c==5+100||c==10+20||c==10+50||c==10+100||c==20+50||c==20+100||c==50+100)
            printf("possible\n");
        else
            printf("impossible\n");
    }
}
