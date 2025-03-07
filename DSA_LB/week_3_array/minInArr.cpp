#include<iostream>
using namespace std;

int getMin(int arr[], int size){
    int min=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    } 
    return min;
}

int main(){
    int arr[]={10,1,2,3,4,5,9};
    int size = 7;
    cout<<getMin(arr, size)<<endl;
    return 0;
}