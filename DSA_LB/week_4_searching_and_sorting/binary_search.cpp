//binary search
#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int target){
    int s = 0;
    int e = size-1;
    int mid = (s+e)/2;
    while(s<=e){
        if(arr[mid]==target) return mid;

        if(arr[mid]<target) s=mid+1;
        else{
            e = mid-1;
        }
        mid = (s+e)/2;
    }
    return -1;
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8}; //sorted array
    int size = 8;
    int target = 5;
    int index = binarySearch(arr, size, target);
    cout<<index<<endl;
    return 0;
}