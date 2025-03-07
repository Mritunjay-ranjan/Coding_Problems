//numeric palindrome equilateral pyramid
// 5
//     1
//    121
//   12321
//  1234321
// 123454321

#include<iostream>
using namespace std;

void p4(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        int k;
        for(k=0;k<=i;k++){
            cout<<k+1;
        }
        while(k>1){
            cout<<--k;
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    p4(n);
    return 0;
}