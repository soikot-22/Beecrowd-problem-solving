#include<stdio.h>
int main(){
    int n,i,j,min,pos;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    min=21;
    for(j=0;j<n;j++){
        if(arr[j]<min){
            min=arr[j];
            pos=j;
        }
    }
    printf("%d\n",pos+1);
    return 0;
}

