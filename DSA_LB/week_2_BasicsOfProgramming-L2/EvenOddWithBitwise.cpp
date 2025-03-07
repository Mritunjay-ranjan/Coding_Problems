//check wether even or odd
#include<iostream>
using namespace std;

bool check_even(int n){
    if(n%2==0){
        return true;
    }
    else{
        return false;
    }
}

bool check_even_bitwise(int num){
    if(num&1){
        return false;
    }
    else{
        return true;
    }
}

int main(){
    int num;
    cout<<"enter num: "<<endl;
    cin>>num;
    bool isEven = check_even(num);
    cout<<"with modulo operator"<<endl;
    if(isEven){
        cout<<"the num is even"<<endl;
    }
    else{
        cout<<"the num is odd"<<endl;
    }
    cout<<"with bitwise"<<endl;
    isEven = check_even_bitwise(num);
    if(isEven){
        cout<<"the num is even"<<endl;
    }
    else{
        cout<<"the num is odd"<<endl;
    }

    return 0;
}
