class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>ump;
        vector<int>result;
        for(int i=0;i<nums.size();i++){
            int complement=target-nums[i];
            if(ump.count(complement)){
                result.push_back(ump[complement]);
                result.push_back(i);
            }
            ump[nums[i]]=i;
        }
        return result;
    }
};