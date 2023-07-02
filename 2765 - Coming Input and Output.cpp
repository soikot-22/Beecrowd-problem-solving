#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char str[128];
    while(gets(str))
    {
        for(i = 0; i < strlen(str); i++)
        {
            if(str[i] == ',')printf("\n");
            else printf("%c", str[i]);
        }
        printf("\n");
    }
    return 0;
}
