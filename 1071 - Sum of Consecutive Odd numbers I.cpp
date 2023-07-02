#include <stdio.h>
int main(){
	int x,y,tmp,i;
	int sumOfOdd=0;
	scanf("%d %d",&x,&y);
	if(x>y)
	    tmp=y;
	    y=x;
	    x=tmp;
	for(i=x+1;i<y;i++){
        if(i%2!=0)
            sumOfOdd=sumOfOdd+i;
	}
	printf("%d\n",sumOfOdd);

	return 0;
}
