#include<iostream>
using namespace std;

void bubbleSort(vector<int>&arr){
    int n = arr.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(10);
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(5);
    arr.push_back(5);
    arr.push_back(2);  
    arr.push_back(5);
    arr.push_back(5);
    arr.push_back(20);
    arr.push_back(20);
    arr.push_back(11);
    arr.push_back(11);
    arr.push_back(10);
    arr.push_back(10);
    bubbleSort(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}