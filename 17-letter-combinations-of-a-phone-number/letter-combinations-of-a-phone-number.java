class Solution {
    private String[] digitsToLetters = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    public List<String> letterCombinations(String digits) {
        List<String> combinations = new ArrayList<>();
        if(digits==null || digits.length()==0){
            return combinations;
        }
        backtrack(0, "", combinations, digits);
        return combinations;
    }

    public void backtrack(int index, String currCombination, List<String> combinations, String digits){
        if(index==digits.length()){
            combinations.add(currCombination);
            return;
        }
        String letters = digitsToLetters[digits.charAt(index)-'0'];
        for(char letter: letters.toCharArray()){
            backtrack(index+1, currCombination+letter, combinations, digits);
        }
    }
}