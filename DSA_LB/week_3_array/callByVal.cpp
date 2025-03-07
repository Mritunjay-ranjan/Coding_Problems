#include<iostream>
using namespace std;

int increment(int a){
    a+=5;
    return a;
}

int main(){
    int a;
    cin>>a;
    cout<<a<<endl;
    int n=increment(a);
    cout<<n<<endl;
    return 0;
}