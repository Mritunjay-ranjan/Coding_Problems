class Solution {
    public int findMin(int[] nums) {
        int n = nums.length;
        int left = 0;
        int right = n -1;
        int min = nums[left];
        if(nums.length == 1){
            return min;
        }
        while(left<right){
            if(nums[left]>=nums[right]){
                min = Math.min(min, nums[right]);
            }
            int mid = left + (right-left)/2;
            if(nums[mid]<=nums[left]){
                min = Math.min(min, nums[mid]);
                right = mid - 1;
            }
            else{
                min = Math.min(min, nums[left]);
                left = left + 1;
            }
        }
        return min;
    }
}