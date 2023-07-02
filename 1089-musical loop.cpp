#include <stdio.h>
int main(){
    int n,i,peak=0;
    while(scanf("%d",&n)!=EOF){
        int arr[n];
        for(i=0; i<n; i++){
            scanf("%d",&arr[i]);
        }
        if(n==2 && (arr[0]!=arr[1])) peak=2;
        if(n==0) break;
        else if(n!=2){
            for(i=1; i<n-1; i++){
            if((arr[i]>arr[i-1] && arr[i]>arr[i+1]) || (arr[i]<arr[i-1] && arr[i]<arr[i+1])){
                peak++;
            }
            }
            if((arr[0]>arr[1] && arr[0]>arr[n-1] ) || (arr[0]<arr[1] && arr[0]<arr[n-1] )){
                peak++;
            }
            if((arr[n-1]>arr[n-2] && arr[n-1]>arr[0]) ||(arr[n-1]<arr[n-2] && arr[n-1]<arr[0])){
                peak++;
            }
        }


        printf("%d\n",peak);
        peak=0;
    }

return 0;
}
