#include <stdio.h>
int main(){
    int t,i,j,index;
    scanf("%d",&t);
    int arr[t];
    for(i=0; i<t; i++){
        scanf("%d",&arr[i]);
    }
     index=0;
     int min=arr[0];
    for(j=0; j<t-1; j++){
        if(arr[j]>arr[j+1]){
            min=arr[j];
            index=j+1;
            break;
        }
    }
    if(index==0) printf("0\n");
    else printf("%d\n",index+1);

return 0;
}
