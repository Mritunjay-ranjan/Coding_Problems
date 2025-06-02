#include<iostream>
using namespace std;

void insertionSort(vector<int>&arr){
    int i=0;
    int key;
    while(i<arr.size()-1){
        int j=i;
        key = arr[j+1];
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
        i++;
    }
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
    insertionSort(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}