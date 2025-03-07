#include<iostream>
#include<vector>
using namespace std;

void dutchFlag(vector<int>&v){
    int left=0;
    int right=v.size()-1;
    int mid=0;
    while(mid<=right){
        if(v[mid]==0){
            swap(v[mid],v[left]);
            left++;
            mid++;
        }
        else if(v[mid]==1){
            mid++;
        }
        else{ //v[mid]==2
            swap(v[mid], v[right]);
            right--;
        }
    }
    
    }

int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    dutchFlag(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}