//Binary search nearly sorted arry means that the element in the current index can only be on index i-1, i, i+1
#include<iostream>
using namespace std;

int search(vector<int> arr, int target){
    int s = 0;
    int e = arr.size()-1;
    while(s<=e){
        int mid = s + (e - s)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid-1]>=0 && arr[mid-1]==target){
            return mid-1;
        }
        else if(arr[mid+1]<=arr.size()-1 && arr[mid+1]==target){
            return mid+1;
        }
        else if(arr[mid]<target){
            s = mid+2;
        }
        else{
            e = mid-2;
        }
    }
    return 0;
}

int main(){
    vector<int> arr;
    arr.push_back(20);
    arr.push_back(10);
    arr.push_back(30);
    arr.push_back(50);
    arr.push_back(40);
    arr.push_back(70);
    arr.push_back(60);
    int target = 70;
    cout<<search(arr, target)<<endl;
    return 0;
}
