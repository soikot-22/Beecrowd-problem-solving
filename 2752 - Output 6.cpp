#include<stdio.h>
int main(){
    char ch[50]="AMO FAZER EXERCICIO NO URI";
    printf("<%s>\n",ch);
    printf("<%30s>\n",ch);
    printf("<%.20s>\n",ch);
    printf("<%-20s>\n",ch);
    printf("<%-30s>\n",ch);
    printf("<%.30s>\n",ch);
    printf("<%30.20s>\n",ch);
    printf("<%-30.20s>\n",ch);

return 0;
}
