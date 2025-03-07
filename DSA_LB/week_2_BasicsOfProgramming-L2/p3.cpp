//numeric inverted hollow half pyramid
// 5
// 12345
// 2  5
// 3 5
// 45
// 5
#include<iostream>
using namespace std;

void p3(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(j==0 || j==n-i-1 || i==0){
                cout<<j+i+1;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    p3(n);
    return 0;
}