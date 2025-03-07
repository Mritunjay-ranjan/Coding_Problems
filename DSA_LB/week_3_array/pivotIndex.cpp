#include<iostream>
using namespace std;
//not complete code just for testing
int main(){
    int leftSum=0;
    int rightSum=0;
    for(int i=1;i<nums.size();i++)
    rightSum+=nums[i];
    
    for(int i=0;i<nums.size();i++){
        if(i==0 or i==num.size-1){
            
        }
        else{
            leftSum+=nums[i-1];
            rightSum-=nums[i];
        }
        if(leftSum==rightSum) return i;
    }
    return -1;
    //sort(nums.begin(), nums.end());
}