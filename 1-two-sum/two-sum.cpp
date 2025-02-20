class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sum;
        vector<int>result;
        for(int i=0;i<nums.size();i++){
            
            for(int j=i+1;j<nums.size();j++){
                sum=0;
                sum+=nums[i];
                sum+=nums[j];
                if(sum==target) {
                result.push_back(i); 
                result.push_back(j);
                return result;
                }
            }
        }
        return result;
    }
};