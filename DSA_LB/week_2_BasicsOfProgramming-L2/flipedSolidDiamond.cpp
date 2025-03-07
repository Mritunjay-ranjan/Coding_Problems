#include<iostream>
using namespace std;

void outerDiamond(int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<"*";
        }
        for(int k=0;k<=i;k++){
            cout<<"  ";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        for(int k=0;k<n-i;k++){
            cout<<"  ";
        }
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    outerDiamond(n);
    return 0;
}