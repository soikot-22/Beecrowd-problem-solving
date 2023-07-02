#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,Q;
    while(cin>>N>>Q){
        int arr1[N];
        for(int i=0; i<N; i++){
            cin>>arr1[i];
        }
        for(int i=0; i<N; i++){
            for(int j=i+1; j<N; j++){
                if(arr1[i]<arr1[j]){
                    int temp = arr1[j];
                    arr1[j]=arr1[i];
                    arr1[i]=temp;
                }
            }
        }
        int x;
        for(int i=0; i<Q; i++){
            cin>>x;
            cout<<arr1[x-1]<<endl;
        }
    }
}
