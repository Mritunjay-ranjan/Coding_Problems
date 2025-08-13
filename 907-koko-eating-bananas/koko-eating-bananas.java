class Solution {
    public int minEatingSpeed(int[] piles, int h) {
        int left = 1;
        int right = 1;
        for(int pile: piles){
            right = Math.max(right, pile);
        }
        while(left<right){
            int mid = left + (right-left)/2;
            if(finishesBannana(mid, piles, h)){
                right = mid;
            }
            else{
                left = mid+1;
            }
        }
        return right;
    }
    public boolean finishesBannana(int k, int[] piles, int h){
        int hoursTaken = 0;
        for(int pile: piles){
            hoursTaken += Math.ceil((double)pile/k);
        }
        return hoursTaken<=h;
    }
}