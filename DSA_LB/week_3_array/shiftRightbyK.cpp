#include<iostream>
using namespace std;
//shift right for k elements
void shift(int arr[], int size, int k){
    int temp[k];
    for(int i=0;i<k;i++){
        temp[i]=arr[size-k+i];
    }
    for(int i=size-1;i>k-1;i--){
        arr[i]=arr[i-k];
    }
    for(int i=0;i<k;i++){
        arr[i]=temp[i];
    }
}

int main(){
    int arr[]={10,20,30,40,50,60};
    int size=6;
    int k=5;
    shift(arr,size,k);
    for(int i=0;i<size;i++){
        cout<<arr[i];
        if(i==size-1){
            cout<<".";
            break;
        }
        else{
            cout<<", ";
        }
    }
    return 0;
}