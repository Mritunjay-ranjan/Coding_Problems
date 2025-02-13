class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int j=0;
        int k=0;
        while(i<nums.size() && j<nums.size()){
            if(nums[k]==nums[j]){
                j++;
            }
            else{
                nums[++i]=nums[j];
                k=j;
            }
        }
        return i+1;
    }
};