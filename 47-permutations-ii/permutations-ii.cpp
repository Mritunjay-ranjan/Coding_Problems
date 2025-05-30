class Solution {
public:
    void helper(vector<int> &nums, vector<vector<int>> &ans, int start){
        if(start==nums.size()){
            ans.push_back(nums);
            return;
        }

        unordered_map<int, bool> visited;
        for(int i=start;i<nums.size();i++){
            if((visited.find(nums[i]))!=visited.end()){
                continue;
            }
            visited[nums[i]]=true;
            swap(nums[i], nums[start]);
            helper(nums, ans, start+1);
            swap(nums[i], nums[start]);
        }
        return;
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        int start = 0;
        helper(nums, ans, start);
        return ans;
    }
};