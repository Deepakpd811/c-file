#include<iostream>
using namespace std;
int main(){
    int n,y;
    cin>>n;
    y=n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            // cout<<n-j+1;
            cout<<"#";
        }
        for(int j=1;j<=(2*(n-i+1))-2;j++){
            cout<<n-i+1;
            // cout<<"$";6
        }
        for(int j=2;j<=i;j++){
            cout<<n-i+2+j-2;
            // cout<<"-";
        }
        cout<<endl;
    }
    for(int i=1;i<=y;i++){
        for(int j=1;j<=y-i+1;j++){
            cout<<n-j+1;
        }
        for(int j=1;j<=(2*(i+1))-2;j++){
            cout<<i+1;
        }
        for(int j=1;j<=y-i;j++){
            cout<<n-y+i+j;
        }
        cout<<endl;
    }
    





    return 0;
}