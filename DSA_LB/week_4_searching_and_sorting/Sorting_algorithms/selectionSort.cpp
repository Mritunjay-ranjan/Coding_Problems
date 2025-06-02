//Time complexity: O(n^2)
#include<iostream>
using namespace std;

void selectionSort(vector<int>&arr){
    int min;
    for(int i=0;i<arr.size()-1;i++){
        min = i;
        for(int j=i+1;j<arr.size();j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        swap(arr[i],arr[min]);
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
    selectionSort(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}