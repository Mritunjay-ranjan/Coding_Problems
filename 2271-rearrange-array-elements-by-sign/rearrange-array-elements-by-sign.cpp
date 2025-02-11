class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans(nums.size());
        int posIndex=0;
        int negIndex=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
                ans[0+2*posIndex]=nums[i];
                posIndex++;
            }
            else{
                ans[1+2*negIndex]=nums[i];
                negIndex++;
            }
        }
        return ans;
    }
};