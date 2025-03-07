#include<iostream>
using namespace std;

int findUnique(int arr[], int size){
    //get unique no. that appears only once using bitwise XOR operator.
    int i=0;
    int ans=0;
    while(i<size){
        ans=ans^arr[i];
        i++;
    }
    return ans;
}

int main(){
    int arr[]={2,10,11,13,10,2,15,13,15};
    int size=9;
    cout<<findUnique(arr, size)<<endl;
    return 0;
}