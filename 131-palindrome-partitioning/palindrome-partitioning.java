class Solution {
    public List<List<String>> partition(String s) {
        List<List<String>> result = new ArrayList<>();
        backtrack(0, new ArrayList<String>(), s, result);
        return result;
    }

    public void backtrack(int start, List<String> current, String s, List<List<String>> result){
        if(start>=s.length()){
            result.add(new ArrayList<String>(current));
            return;
        }

        for(int end=start; end<s.length(); end++){
            if(isPalindrome(start, end, s)){
                current.add(s.substring(start, end+1));
                backtrack(end+1, current, s, result);
                current.remove(current.size()-1);
            }
        }
    }

    public boolean isPalindrome(int start, int end, String s){
        while(start<end){
            if(s.charAt(start++)!=s.charAt(end--)){
                return false;
            }
        }
        return true;
    }
}