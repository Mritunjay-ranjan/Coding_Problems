class Solution {
    public boolean isValid(String s) {
        HashMap<Character, Character> mappedBrackets = new HashMap<>();
        mappedBrackets.put(')', '(');
        mappedBrackets.put('}', '{');
        mappedBrackets.put(']', '[');

        Stack<Character> stack = new Stack<>();

        for(int i=0;i<s.length();i++){
            char c = s.charAt(i);
            if(mappedBrackets.containsValue(c)){
                stack.push(c);
            }
            else{
                if(stack.isEmpty()){
                    return false;
                }
                char top = stack.pop();
                
                if(top!=mappedBrackets.get(c)){
                    return false;
                }
            }
        }
        return stack.isEmpty();
    }
}