#include<iostream>
using namespace std;

int digitToNum(int no_digit){
    int digit=0;
    int j;
    for(int i=0;i<no_digit;i++){
        cin>>j;
        digit=digit*10+j;
    }
    return digit;
}

int main(){
    int no_digit;
    cin>>no_digit;
    int num = digitToNum(no_digit);
    cout<<num;
    return 0;
}