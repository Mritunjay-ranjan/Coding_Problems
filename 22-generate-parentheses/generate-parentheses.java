class Solution {
    public List<String> generateParenthesis(int n) {
        List<String> ans = new ArrayList();
        backtrack(ans, 0,  new StringBuilder(), 0, n);
        return ans;
    }
    public void backtrack(List<String> ans, int open, StringBuilder curr, int close, int max){
        if(curr.length()==max*2){
            ans.add(curr.toString());
            return;
        }
        if(open<max){
            curr.append("(");
            backtrack(ans, open+1, curr, close, max);
            curr.deleteCharAt(curr.length()-1);
        }
        if(close<open){
            curr.append(")");
            backtrack(ans, open, curr, close+1, max);
            curr.deleteCharAt(curr.length()-1);
        }
    }
}