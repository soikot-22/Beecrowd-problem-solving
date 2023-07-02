#include <bits/stdc++.h>
using namespace std;
int main(){
    string dollars;
    int cents;
    while(cin>>dollars>>cents){
            int ct=0;
        if(dollars.size()%3==0 && dollars.size()%6==0){
            cout<<"$";
            int ct;
                for(int i=0; i<dollars.size(); i++){
                    cout<<dollars[i];
                    ct++;
                    if(ct%3==0 && i!=(dollars.size()-1)) cout<<",";
                }
                if(cents<10) cout<<".0"<<cents<<endl;
                    else cout<<"."<<cents<<endl;
        }
        else if(dollars.size()%3==1 && dollars.size()%2==1){
            cout<<"$"<<dollars[0]<<",";
            for(int i=1; i<dollars.size(); i++){
                cout<<dollars[i];
                ct++;
                if(ct%3==0 && (i!=dollars.size()-1)) cout<<",";
            }
            if(cents<10) cout<<".0"<<cents<<endl;
                    else cout<<"."<<cents<<endl;
        }
        else if(dollars.size()%3==2 && dollars.size()%6!=0){
            cout<<"$"<<dollars[0]<<dollars[1]<<",";
            for(int i=2; i<dollars.size(); i++){
                cout<<dollars[i];
                ct++;
                if(ct%3==0 && (i!=dollars.size()-1)) cout<<",";
            }
            if(cents<10) cout<<".0"<<cents<<endl;
                    else cout<<"."<<cents<<endl;
        }
    }

}
