#include<iostream>
using namespace std;

void hollowFullPyra(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<"  ";
        }
        for(int k=0;k<(2*(i+1)-1);k++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    hollowFullPyra(n);
}