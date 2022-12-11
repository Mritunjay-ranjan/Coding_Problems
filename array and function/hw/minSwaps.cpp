/*

Minimum swaps required to bring all elements less than or equal to k together

*/

#include<iostream>
using namespace std;

int minSwap(int arr[],int k,int n){

    int count=0;
    for(int i=0;i<n;i++){
        
        if(arr[i]<=k){
            count++;
        }
    }
    int min=100;
    int a=0;
    for(int i=0;i<n-count;i++){
        a=0;
        for(int j=i;j<i+count;j++){
            if(arr[j]>k){
                a++;
            }
        }
        if(a<min)
        min=a;
    }
    return min;
}

int main(){
    int arr[]={2, 1, 5, 6, 3};
    int n=7;
    int k=5;
    cout<<minSwap(arr,k,n)<<endl;
    return 0;
}