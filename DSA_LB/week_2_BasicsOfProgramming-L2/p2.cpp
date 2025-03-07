#include<iostream>
using namespace std;

void p2(int n){
    
    for(int i=0;i<n;i++){
        char ch='A';
        for(int j=0;j<=i;j++){
            
            cout<<ch;
            ch=ch+1;
        }
        ch=ch-1;
        
        for(int j=0;j<i;j++){
            ch=ch-1;
            cout<<ch;
        }
        
        cout<<endl;
    }
    
}

int main(){
    int n;
    cin>>n;
    p2(n);
    return 0;
}