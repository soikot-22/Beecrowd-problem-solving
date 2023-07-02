#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int row,col,i,j,flag,r,c;
    cin>>row>>col;
    int arr[row][col];
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }
    for(i=0; i<row-1; i++){
        for(j=0; j<col-1; j++){
            if(arr[i][j]==42){
                /*
                if(i==0||i==row-1||j==0||j==col-1){
                    continue;
                }
                */
                if(arr[i][j-1]==7 && arr[i][j+1]==7 && arr[i-1][j]==7 && arr[i+1][j]==7 && arr[i-1][j-1]==7 && arr[i-1][j+1]==7 && arr[i+1][j-1] && arr[i+i][j+1]==7){
                    flag=1;
                    r=i,c=j;
                }
                else flag==0;
            }
        }
    }
    if(flag==1) cout<<r<<" "<<c<<endl;
    else cout<<"0 0"<<endl;

return 0;
}
