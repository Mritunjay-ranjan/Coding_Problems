/*

sort an array of 0,1 and 2

*/

#include<iostream>
using namespace std;

void sort(int arr[], int n){
    int j0=0;
    int j1=0;
    int j2=0;
    int i;
    for(i=0;i<n;i++){
    if(arr[i]==0){
        j0++;
    }
    else if(arr[i]==1){
        j1++;
    }
    else if(arr[i]==2){
        j2++;
    }
    }
    for(i=0;i<j0;i++){
        arr[i]=0;
    }
    for(i=j0;i<j0+j1;i++){
        arr[i]=1;
    }
    for(i=j0+j1;i<j0+j1+j2;i++){
        arr[i]=2;
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[100];
    int n;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    cout<<"Enter the elements of an array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,n);
    return 0;
}