#include<iostream>
#include<cmath>
using namespace std;

int binaryToDecimal(int n){
    int dec=0;
    int i=0;
    while(n){
        dec+=pow(2,i++)*(n%10);
        n=n/10;
    }
    return dec;
}

int main(){
    int n;
    cin>>n;
    cout<<binaryToDecimal(n)<<endl;
    return 0;
}
