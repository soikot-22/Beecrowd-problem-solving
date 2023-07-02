#include <stdio.h>
int main(){
    int t,QT,S,i,j,k,c;
    scanf("%d",&t);
    for(i=0; i<t; i++){
        scanf("%d %d",&QT,&S);
        int arr[QT];
        for(j=0; j<QT; j++){
            scanf("%d",&arr[j]);
        }
        int index=0;
        for(j=0; j<QT; j++){
            if(arr[j]==S){
                index=j;
                break;
            }
            else{
                for(c=1; c<QT; c++){
                    if((arr[j]-c)==S || (arr[j]+c)==S){
                        index=j;
                        break;
                    }
                }
            }
        }
        printf("%d\n",index+1);
    }

return 0;
}
