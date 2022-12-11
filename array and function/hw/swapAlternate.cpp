/*

swap alternate array

*/

#include<iostream>
using namespace std;

void altSwap(int arr[], int n){
    int temp;
    for(int i=0;i<n;i=i+2){
        if(i==n-1){
            break;
        }
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[100];
    int n;
    cout<<"Enter the size of an array:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    altSwap(arr,n);
    return 0;
}