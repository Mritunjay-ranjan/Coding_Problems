#include<iostream>
using namespace std;

void butterfly(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        for(int k=0;k<2*(n-i-1);k++){
            cout<<" ";
        }
        for(int m=0;m<i+1;m++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        for(int k=0;k<2*i;k++){
            cout<<" ";
        }
        for(int m=0;m<n-i;m++){
            cout<<"*";
        }
        cout<<endl;
    }

}

int main(){
    int n;
    cin>>n;
    butterfly(n);
    return 0;
}