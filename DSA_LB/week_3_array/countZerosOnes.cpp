#include<iostream>
using namespace std;

void countZeros(int arr[], int size){
    int zeros=0;
    int ones=0;
    for(int i=0;i<size;i++){
        if(arr[i]==1){
            ones++;
        }
        if(arr[i]==0){
            zeros++;
        }
        
    }
    cout<<"1s: "<<ones<<endl;
    cout<<"0s: "<<zeros<<endl;
}

int main(){
    int arr[]={1,1,0,0,0,1,0,1,1};
    int size=9;
    countZeros(arr, size);
    
    return 0;
}