#include<iostream>
using namespace std;

void numHalfPyra(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<j+1;
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