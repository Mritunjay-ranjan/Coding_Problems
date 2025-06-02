#include<iostream>
using namespace std;

int binarySearch(int arr[], int e, int k){
    int s = e/2;
    int index = -1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]>k){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return index;
}

int exponentialSearch(int arr[], int n, int k){
    int i=0;
    if(arr[i]==k){return i;}
    i=1;
    while(i<n && arr[i]<=k){
        i*=2;
    }
    int ans = binarySearch(arr,min(i, n-1),k);
    return ans;
}

int main(){
    int arr[] = {2,3,4,5,6,7,8,9,10,11,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 9;
    int ans = exponentialSearch(arr, n, k);
    cout<<ans<<endl;
    return 0;
}