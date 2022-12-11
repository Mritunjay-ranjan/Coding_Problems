/*

1 2 7
1 3 6
1 4 5
2 3 5

*/

#include<iostream>
using namespace std;

void tripletSum(int arr[], int n, int target){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==target){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" "<<endl;
                }
            }
        }
    }
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=9;
    int target=10;
    tripletSum(arr,n,target);
    return 0;
}