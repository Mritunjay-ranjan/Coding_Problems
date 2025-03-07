#include<iostream>
using namespace std;

void sort(int arr[], int size){
    int zero=0;
    int one=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            zero++;
            continue;
        }
        if(arr[i]==1){
            one++;
        }
    }
    int arr1[zero+one];
    int i=0;
    for(i=0;i<zero;i++){
        arr[i]=0;
    }
    for(i;i<zero+one;i++){
        arr[i]=1;
    }
    for(i=0;i<zero+one;i++){
        cout<<arr[i]<<", ";
    }
}

int main(){
    int arr[]={0,1,0,1,1,0,0,0,0};
    int size = 9;
    sort(arr,size);
    return 0;
}