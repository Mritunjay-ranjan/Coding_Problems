class Solution {
    public boolean canPartition(int[] nums) {
        int totalSum = 0;
        for(int num: nums){
            totalSum+=num;
        }

        //If the total sum is odd, It's not possible to partition it into two equal subsets
        if(totalSum%2!=0){
            return false;
        }
        int target = totalSum/2;
        boolean[] dp = new boolean[target+1];
        dp[0]=true;

        //process each number in the array
        for(int num: nums){
            //Go backwards to prevent using the same element more than once
            for(int j=target; j>=num; j--){
                if(dp[j-num]){
                    dp[j]=true;
                    if(j==target){
                        return true;
                    }
                }
            }
        }
        return dp[target];
    }
}