#include<iostream>
using namespace std;

int countSet(int n){
    int count=0;
    while(n){
        n=n&(n-1);
        count++;
    }
    return count;
}

int main(){
    int n=10;
    cout<<countSet(n)<<endl;
    return 0;
}