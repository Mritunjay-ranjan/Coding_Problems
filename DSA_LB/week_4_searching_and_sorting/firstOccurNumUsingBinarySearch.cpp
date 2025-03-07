#include<iostream>
using namespace std;

//binary search to find the first occurance of target value
int find_target(int arr[], int size, int target){
    int start = 0;
    int end = size - 1;
    //int mid = (start+end)/2;
    int mid = s + (e-s)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid] == target){
            ans = mid;
            end = mid-1;
        }
        else if(arr[mid]>target){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = (start+end)/2;
    }
    return ans;
}

int main(){
    int arr[]={20,25,30,30,30,30,40,50};
    int size = 8;
    int target = 30;
    cout<<"index:"<<find_target(arr, size, target)<<endl;
    
    return 0;
}