//reverse an integer
#include<iostream>
using namespace std;

int reverseInt(int num){
    int len=0;
    int n=num;
    while(n!=0){
        n=n/10;
        len++;
    }
    
    int j;
    int k;
    
    while(len>0){
        
        j=len-1;
        k=(num%10);
        while(j>0){
        k=k*10;
        j=j-1;
        }
        n=n+k;
        num=num/10;
        len--;
    }
    return n;
}

int main(){
    int num;
    cin>>num;
    cout<<reverseInt(num)<<endl;
    return 0;
}

