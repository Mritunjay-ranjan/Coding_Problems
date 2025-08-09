class Solution {
    public boolean isValid(String s) {
        HashMap<Character, Character> bracketMap = new HashMap<>();
        bracketMap.put('}','{');
        bracketMap.put(')','(');
        bracketMap.put(']','[');
        Stack<Character> stack = new Stack<>();
        for(int i=0;i<s.length();i++){
            char c = s.charAt(i);
            if(bracketMap.containsValue(c)){
                stack.push(c);
            }
            else{
                if(stack.isEmpty()){
                    return false;
                }
                char top = stack.pop();
                if(top!=bracketMap.get(c)){
                    return false;
                }
            }
        }
        return stack.isEmpty();
    }
}