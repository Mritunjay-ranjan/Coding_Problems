class Solution {
    public int maxCoins(int[] nums) {
        int n = nums.length;
        int[] extended_nums = new int[n+2];
        extended_nums[0]=1;
        extended_nums[n+1]=1;
        
        //copy the original nums array into extended nums array
        for(int i=1;i<=n;i++){
            extended_nums[i]=nums[i-1];
        }

        //Dp table to store maximum coins
        int[][] dp = new int[n+2][n+2];

        //Fill the Dp table
        for(int length=1;length<=n;length++){ //Length of subarray
            for(int left=1;left<=n-length+1;left++){
                int right = left+length-1;

                //Try every position as last balloon to pop in this range
                for(int i=left;i<=right;i++){
                    int coins = extended_nums[left-1]*extended_nums[i]*extended_nums[right+1];
                    coins+=dp[left][i-1]+dp[i+1][right];
                    dp[left][right]=Math.max(dp[left][right], coins);
                }
            }
        }
        //The result is max coins obtained by bursting all ballons
        return dp[1][n];
    }
}