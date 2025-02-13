class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int leftSum;
        int rightSum;
        int pivot=-1;
        for(int i=0;i<nums.size();i++){
            leftSum=0;
            rightSum=0;
            //leftSum
            for(int j=i-1;j>=0;j--){
                if(i==0){
                    break;
                }
                leftSum+=nums[j];
            }
            for(int j=i+1;j<nums.size();j++){
                if(i==(nums.size()-1)){
                    break;
                }
                rightSum+=nums[j];
            }
            if(leftSum==rightSum){
                return i;
            }
        }
        return -1;
    }
};