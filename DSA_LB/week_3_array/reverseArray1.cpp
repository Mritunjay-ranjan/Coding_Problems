#include<iostream>
using namespace std;

void reverseArray(int arr[], int size){
    int left=0;
    int right=size-1;
    while(right>left){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int size=7;
    reverseArray(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}