#include<iostream>
using namespace std;

void swapXor(int &a, int &b){
    a=a^b;
    b=a^b;
    a=a^b;
}

int main(){
    int a=39;
    int b=54;
    swapXor(a,b);
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}