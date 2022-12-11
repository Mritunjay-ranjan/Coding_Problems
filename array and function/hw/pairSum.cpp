/*



*/

#include<iostream>
using namespace std;

void target(int arr[],int n,int value){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==value){
                cout<<arr[i]<<" "<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    int value=7;
    target(arr,n,value);
    return 0;
}