class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int fast=0;
        int slow=0;
        do{
            slow=nums[slow];
            fast=nums[fast];
            fast=nums[fast];
        }
        while(slow!=fast);
        slow=0;
        do{
            fast=nums[fast];
            slow=nums[slow];
        }
        while(slow!=fast);
        return fast;
    }
};