#include<iostream>
using namespace std;

void reverseArray(int arr[], int size){
    int element;
    for(int i=0;i<size/2;i++){
        if(size%2==0 && i==size/2){
            break;
        }
        element=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=element;
    }
}

int main(){
    int arr[]={1,2,3,4,5,6};
    int size=6;
    reverseArray(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}