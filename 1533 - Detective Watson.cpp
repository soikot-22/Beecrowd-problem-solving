#include <stdio.h>
int main(){
    int n,i,j,smax,pos,max;
    while(scanf("%d",&n)!=EOF){
    max = smax = pos = 0;
    if(n==0) break;
    int arr[n];
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);

        if(arr[i]>max){
            max = arr[i];
        }
    }
    for(i=0; i<n; i++){
        if(arr[i]>smax && arr[i]!=max){
            smax=arr[i];
             pos=i;
        }
    }
    printf("%d\n",pos+1);
    }
return 0;
}
