#include <stdio.h>
int main(){
    int n,row,col,i,j;
    while(scanf("%d",&n)!=EOF){
        for (row = 1; row <= n; row+=2)  // Loop to print rows
        {
            for (col = 1; col <= n-row; col+=2)  // Loop to print spaces in a row
              printf(" ");

            for (col = 1; col <= 2*row - 1; col+=2) // Loop to print stars in a row
              printf("*");

            printf("\n");
        }
        for(i=0; i<n/2; i++){
        printf(" ");
        }
        printf("*\n");
        for(i=1; i<n/2; i++){
            printf(" ");
        }
            printf("***\n");

    }

return 0;
}
