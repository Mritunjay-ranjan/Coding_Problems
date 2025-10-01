class Solution {
    public int numDecodings(String s) {
        if(s.charAt(0)=='0'){
            return 0;
        }
        int one = 1; //dp[i-1];
        int two = 1; //dp[i-2];
        for(int i=1;i<s.length();i++){
            int current=0;

            //Case 1: Single digit is valid (not '0')
            if(s.charAt(i)!='0'){
                current = one;
            }

            //Case 2: Two digit number between 10 and 26
            int value=Integer.parseInt(s.substring(i-1, i+1));
            if(value>=10 && value<=26){
                current=current+two;
            }

            //update Dp states
            two = one;
            one = current;
        }
        return one;
    }
}