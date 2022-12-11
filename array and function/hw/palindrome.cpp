/*

palindrome or not

*/

#include<iostream>
using namespace std;

bool palindrome(int arr[],int n){
    for(int i=0;i<n/2;i++){
        if(arr[i]!=arr[n-i-1]){
            return false;
        }
    }
    return true;
}

int main(){
    int arr[]={1,2,5,4,2,1};
    int n=6;
    cout<<palindrome(arr,n)<<endl;
    return 0;
}