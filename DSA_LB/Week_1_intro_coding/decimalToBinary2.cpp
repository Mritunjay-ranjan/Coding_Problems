//Bitwise & method
#include<iostream>
#include<cmath>
using namespace std;

int decimalToBinary(int n){
    int i=0;
    int bit=0;
    while(n>0){
        bit+=(n&1)*pow(10,i++);
        n=n>>1; //right shift
    }
    return bit;
}

int main(){
    int n;
    cin>>n;
    cout<<decimalToBinary(n)<<endl;
    return 0;
}