// 5
// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 5*5*5*5*5
// 4*4*4*4
// 3*3*3
// 2*2
// 1

#include<iostream>
using namespace std;

void numHalfPyra(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            if(j==i)
            cout<<i+1;
            else
            cout<<i+1<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(j==n-i-2)
            cout<<n-i-1;
            else
            cout<<n-i-1<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    numHalfPyra(n);
    return 0;
}