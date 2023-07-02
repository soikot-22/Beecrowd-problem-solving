#include <stdio.h>
int main() {
    int n,i,num;
    int arr[2005];

    for (i=0; i<2000; i++){
        arr[i] = 0;
    }
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        scanf("%d",&num);
        arr[num-1]++;
    }
    for (i=0; i<2000; i++)
        if(arr[i] != 0)
        printf("%d aparece %d vez(es)\n", i+1, arr[i]);
    return 0;
}

