#include<stdio.h>

int main()
{
    int i, j, M, N, sum = 0, c;
    for(i = 0;i < 100;i++)
        {
        scanf("%d %d", &M, &N);
        if(M <= 0 || N <= 0)break;
        if(M > N)
        {
            c = M;M = N;N = c;
        }
        for(j = M;j <= N;j++){
            printf("%d ", j);
            sum = sum + j;
        }
        printf("Sum=%d\n", sum);
        sum = 0;
    }

    return 0;
}
