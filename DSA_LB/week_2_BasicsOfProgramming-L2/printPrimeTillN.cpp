#include<iostream>
using namespace std;

void primeNo(int num){
    if(num>2){
        cout<<"2,";
    }
    for(int i=3;i<=num;i++){
        for(int j=2;j<i;j++){
            if(i%j==0){
                break;
            }
            else if(j==i-1){
                cout<<i<<",";
            }
        }
    }
}

int main(){
    int n;
    cin>>n;
    primeNo(n);
    return 0;
}