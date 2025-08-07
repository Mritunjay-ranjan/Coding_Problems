class Solution {
    public int characterReplacement(String s, int k) {
        int left = 0;
        int right = 0;
        int ans = 0;
        int[] count = new int[26];
        int maxOccurance = 0;
        while(right<s.length()){
            count[s.charAt(right)-'A']++;
            maxOccurance = Math.max(maxOccurance, count[s.charAt(right)-'A']);
            if((right-left+1-maxOccurance)<=k){
                ans = Math.max(ans, right-left+1);
            }
            else{
                count[s.charAt(left)-'A']--;
                left++;
            }
            right++;
        }
        return ans;
    }
}