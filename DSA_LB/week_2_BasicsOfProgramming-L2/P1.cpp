#include<iostream>
using namespace std;

void p1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(j==0 & i!=n-1)
            cout<<j+1<<" ";
            else if(j== i || i==n-1 || j==0){
                cout<<j+1;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    p1(n);
    return 0;
}