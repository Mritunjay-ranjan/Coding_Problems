class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int x=0;
        // sum from 1 to n : (n(n+1))/2
        for(int i=0;i<=nums.size();i++){
            if(i==nums.size()){
                x^=i;
                continue;
            }
            x^=i;
            x^=nums[i];
        }
        return x;
    }
};