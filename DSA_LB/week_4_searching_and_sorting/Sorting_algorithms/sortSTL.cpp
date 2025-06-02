#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool mycomp(int&a, int&b){
    // return a<b; //ascending order
    return a>b; //descending order
}

int main(){
    vector<int>arr;
    arr.push_back(44);
    arr.push_back(55);
    arr.push_back(22);
    arr.push_back(11);
    arr.push_back(13);
    sort(arr.begin(), arr.end(),mycomp);
    for(int i=0;i<arr.size();i++)
    cout<<arr[i]<<" ";
    return 0;
}