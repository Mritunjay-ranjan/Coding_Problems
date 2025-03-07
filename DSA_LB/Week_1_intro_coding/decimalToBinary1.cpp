//Division method
#include<iostream>
#include<cmath>
using namespace std;

int decimalToBinary(int n){
    int binary=0;
    int i=0;
    while(n!=0){
        binary+=(n%2)*pow(10,i++);
        n=n/2;
    }
    return binary;
}

int main(){
    int n;
    cin>>n;
    int binary= decimalToBinary(n);
    cout<<binary<<endl;
    return 0;
}

