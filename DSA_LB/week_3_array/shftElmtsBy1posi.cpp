#include<iostream>
using namespace std;
//with extra array
void shiftElements(int arr[], int size){
    int arr1[size];
    for(int i=0;i<size;i++){
        if(i==size-1){
            arr1[0]=arr[i];
            continue;
        }
        arr1[i+1]=arr[i];
    }
    for(int i=0;i<size;i++){
        cout<<arr1[i]<<", ";
    }
}
//without xtra array
void shiftElements1(int arr[], int size){
    int k=arr[size-1];
    for(int i=size-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=k;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<", ";
    }
}

int main(){
    int arr[]={1,2,3,4,5,6,6,7};
    int size = 8;
    shiftElements(arr, size);
    cout<<endl;
    shiftElements1(arr, size);
    return 0;
}