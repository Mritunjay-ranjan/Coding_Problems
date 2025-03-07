#include<iostream>
using namespace std;

void invFullPyra(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<"  ";
        }
        for(int k=0;k<n-i;k++){
            cout<<"*   ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    invFullPyra(n);
    return 0;
}