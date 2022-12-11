/*

unique number of occurences
*made only for positive elements

*/

#include<iostream>
using namespace std;

bool unique(int arr[],int n){
    int a=0;
    int max=0;
    int arr1[100];
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=1;i<=max;i++){
        a=0;
        for(int j=0;j<n;j++){
            if(arr[j]==i){
                a++;
            }
        }
        if(a>0){
            arr1[count]=a;
            count++;
        }
    }
    for(int i=0;i<=count;i++){
        for(int j=i+1;j<=count;j++){
            if(arr1[i]==arr1[j]){
                return false;
            }
        }
    }
    return 1;
}

int main(){
    int arr[]={1,2};
    int n=2;
    cout<<unique(arr,n);
    return 0;
}