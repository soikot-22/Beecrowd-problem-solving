#include <math.h>
#include <stdio.h>
int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        if (n == 0 || n == 1)
        {
            printf("Nada\n");
            continue;
        }

        if (n == 2)
        {
            printf("Super\n");
            continue;
        }

        int flag = 0;
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                printf("Nada\n");
                flag = 1;
                break;
            }
        }
        if (flag==1)
            continue;
        int tmp = n;
        int count = 0;
        int digit = 0;
        flag = 0;
        while (tmp != 0)
        {
            digit++;
            int rem = tmp % 10;
            if (rem == 2 || rem == 3 || rem == 5 || rem == 7)
                count++;
            else
            {
                printf("Primo\n");
                flag = 1;
                break;
            }
            tmp /= 10;
        }
        if(flag==1) continue;
        if (digit == count)
            printf("Super\n");
    }

    return 0;
}
