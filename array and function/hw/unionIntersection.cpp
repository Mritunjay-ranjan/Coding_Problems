/*

union and intersection

*/

#include<iostream>
using namespace std;

void union1(int arr1[],int arr2[],int n1,int n2){
    cout<<"union of given two arrays is:"<<endl;
    for(int i=0;i<n1;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n2;i++){
        cout<<arr2[i]<<" ";
    }
}

void intersection1(int arr1[],int arr2[],int n1,int n2){
    cout<<"intersection of given two arrays is:"<<endl;
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
            }
        }
    }
}

int main(){
    int arr1[100];
    int arr2[100];
    int n1;
    int n2;
    cout<<"Enter the size of array1:"<<endl;
    cin>>n1;
    cout<<"Enter the elements of array1:"<<endl;
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    cout<<"Enter the size of array2:"<<endl;
    cin>>n2;
    cout<<"Enter the elements of array2:"<<endl;
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    union1(arr1,arr2,n1,n2);
    intersection1(arr1,arr2,n1,n2);

}