//Find the odd appearing element in O(Log n) time
// Input: arr[] = {1, 1, 2, 2, 1, 1, 2, 2, 13, 1, 1, 40, 40, 13, 13}
// Output: 13

// Input: arr[] = {1, 1, 2, 2, 3, 3, 4, 4, 3, 600, 600, 4, 4}
// Output: 3
#include<iostream>
using namespace std;

int findOdd(vector<int>arr){
    int s = 0;
    int e = arr.size()-1;
    int ans=-1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if((mid&1)==0){
            if((mid+1)<arr.size() && arr[mid+1]!=arr[mid]){
                ans = mid;
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        else{
            if((mid+1)<arr.size() && arr[mid+1]==arr[mid]){
                ans = mid;
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
    }
    return ans;
}

int main(){
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(10);
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(5);
    arr.push_back(5);
    arr.push_back(2);  //This is the expected answer
    arr.push_back(5);
    arr.push_back(5);
    arr.push_back(20);
    arr.push_back(20);
    arr.push_back(11);
    arr.push_back(11);
    arr.push_back(10);
    arr.push_back(10);
    cout<<findOdd(arr)<<endl;
    return 0;
}