class Solution {
    public int[] maxSlidingWindow(int[] nums, int k) {
        if(nums==null || nums.length==0 || k<=0 || k>nums.length){
            return new int[0];
        }
        int n = nums.length;
        int[] result = new int[n-k+1];
        Deque<Integer> deque = new LinkedList<>();

        for(int i=0;i<nums.length;i++){
            
            //remove indices that are out of the current window
            while(!deque.isEmpty() && deque.peek()<i-k+1){
                deque.poll();
            }
            //remove indices whose corresponding values are less than nums[i]
            while(!deque.isEmpty() && nums[deque.peekLast()]<nums[i]){
                deque.pollLast();
            }
            deque.offer(i);
            if(i>=k-1){
                result[i-k+1] = nums[deque.peek()];
            }
        }
        return result;
    }
}