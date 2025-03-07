#include<iostream>
using namespace std;

void extremePrint(int arr[], int size){
    int i=0;
    while(i<=size/2){
        cout<<arr[i];
        if(i==size/2 && size%2!=0){
            i++;
            cout<<";";
            continue;
        }
        cout<<", ";
        cout<<arr[size-i-1]<<"; ";
        i++;
    }
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size= 9;
    extremePrint(arr, size);
    
    return 0;
}