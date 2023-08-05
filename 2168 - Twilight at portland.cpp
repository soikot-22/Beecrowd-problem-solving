#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    n +=1;
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<(n-1);i++){
		for(int j=1;j<n;j++){
			if(a[i][j] + a[i][j-1] + a[i+1][j] + a[i+1][j-1] < 2){
				cout<<"U";
			}
			else{
				cout<<"S";
			}
		}
		cout<<endl;
	}
}
