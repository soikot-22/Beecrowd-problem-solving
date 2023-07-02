#include <stdio.h>

int main(){
	int N, P, Q;
	char ch;
	scanf("%d",&N);
	scanf("%d %c %d", &P, &ch, &Q);

	if(ch=='+')
        if(P+Q<=N)
            printf("OK\n");
        else
            printf("OVERFLOW\n");
    else
        if(P*Q<=N)
            printf("OK\n");
        else
            printf("OVERFLOW\n");


	return 0;
}
