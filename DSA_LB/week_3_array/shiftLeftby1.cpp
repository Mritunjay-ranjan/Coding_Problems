#include<iostream>
using namespace std;

void shiftLeft(int arr[], int size){
    int k=arr[0];
    for(int i=0;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    arr[size-1]=k;
}

int main(){
    int arr[]={10,20,30,40,50,60};
    int size = sizeof(arr)/sizeof(int);
    shiftLeft(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i];
        if(i==size-1){
            cout<<". ";
            break;
        }
        cout<<", ";
    }
    return 0;
}