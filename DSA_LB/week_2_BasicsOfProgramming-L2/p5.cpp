
// 5
// ********1********
// *******2*2*******
// ******3*3*3******
// *****4*4*4*4*****
// ****5*5*5*5*5****

#include<iostream>
using namespace std;

void p5(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n+3-i;j++){
            cout<<"*";
        }
        for(int k=0;k<2*(i+1)-1;k++){
            if(k%2==0){
                cout<<i+1;
            }
            else{
                cout<<"*";
            }
        }
        for(int j=0;j<n+3-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    p5(n);
    return 0;
}