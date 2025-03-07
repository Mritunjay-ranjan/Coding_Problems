//using two pointers approach
#include<iostream>
using namespace std;

void sort(int arr[], int size){
    int left=0;
    int right=size-1;
    while(left<right){
        if(left==right){
            break;
        }
        if(arr[left]==1 && arr[right]==0){
            swap(arr[left],arr[right]);
            left++;
            right--;
            continue;
        }
        if(arr[left]==0){
            left++;
        }
        if(arr[right]==1){
            right--;
        }
    }
}

int main(){
    int arr[]={0,1,0,1,1,0,0,0,0};
    int size = 9;
    sort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<", ";
    }
    return 0;
}