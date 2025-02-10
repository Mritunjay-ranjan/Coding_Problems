class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        // sum from 1 to n : (n(n+1))/2
        int sum_nums=0;
        for(int i=0;i<nums.size();i++){
            sum_nums+=nums[i];
        }
        int sum_expected = (nums.size()*((nums.size())+1))/2;
        int miss_num = sum_expected - sum_nums;
        return miss_num;
    }
};