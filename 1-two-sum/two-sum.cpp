class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>ump;
        vector<int>result;
        for(int i=0;i<nums.size();i++){
            ump[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            int complement= target - nums[i];
            if(ump.count(complement) && ump[complement]!=i){
                result.push_back(i);
                result.push_back(ump[complement]);
                return result;
            }
        }

        return result;
        }
    };
