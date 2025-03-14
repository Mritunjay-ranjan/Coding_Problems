#include<iostream>
using namespace std;

int findElement(int arr[], int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid]==mid+1){
            s = mid+1;
        }
        else if(arr[mid]>mid+1){
            e = mid-1;
            ans = mid+1;
        }
        mid = (s+e)/2;
    }
    if(ans==-1) ans = n+1;
    
    return ans;
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int n=8;
    cout<<findElement(arr, n);
    return 0;
}