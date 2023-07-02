#include <iostream>

using namespace std;
int main(){
	int X,Y,c,i;
	scanf("%d %d",&X,&Y);
	if(X>Y)
        c=Y,Y=X,X=c;

    for(i=X+1;i<Y;i++){
        if(X>0 && Y>0){
            if(i%5==2 || i%5==3)
            printf("%d\n",i);
        }
    }

	return 0;
}
