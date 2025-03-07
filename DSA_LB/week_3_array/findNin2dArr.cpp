#include<iostream>
using namespace std;

int main(){
    int arr[4][3];
    int n = 12;
    for(int i=0;i<4;i++){
        cout<<"Enter row "<<i<<" elements: "<<endl;
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    bool flag=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==12){
                flag=1;
                break;
            }
        }
    }
    if(flag){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    return 0;
}