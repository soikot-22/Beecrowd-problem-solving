#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(arr[i]>arr[j]){
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        for(int i=0; i<n; i++){
            if(arr[i]<10) cout<<"000"<<arr[i]<<endl;
            else if(arr[i]<100) cout<<"00"<<arr[i]<<endl;
            else if(arr[i]<1000)cout<<"0"<<arr[i]<<endl;
            else cout<<arr[i]<<endl;
        }
    }
}
