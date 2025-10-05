class Solution {
    public int change(int amount, int[] coins) {
        //dp array to store the number of ways to make each amount
        int[] dp = new int[amount+1];
        dp[0]=1; //There is 1 way to make amt 0

        //update the dp array for each coin
        for(int coin: coins){
            for(int j=coin;j<=amount;j++){
                dp[j]+=dp[j-coin];
            }
        }
        //The answer for the original amount
        return dp[amount];
    }
}