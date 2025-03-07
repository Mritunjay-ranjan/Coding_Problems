#include<iostream>
using namespace std;

void floydTriangle(int n){
    int k=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<k++;
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    floydTriangle(n);
    return 0;
}