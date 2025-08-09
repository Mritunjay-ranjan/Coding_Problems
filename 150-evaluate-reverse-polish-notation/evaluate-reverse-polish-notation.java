class Solution {
    public int evalRPN(String[] tokens) {
        Stack<Integer> stack = new Stack<>();
        for(int i=0;i<tokens.length;i++){
            String c = tokens[i];
            if(isOperator(c)){
                int b = stack.pop();
                int a = stack.pop();
                stack.push(operate(a, b, c));
            }
            else{
                stack.push(Integer.parseInt(c));
            }
        }
        return stack.pop();
    }
    public boolean isOperator(String c){
        if(c.equals("+") || c.equals("-") || c.equals("*") || c.equals("/")){
            return true;
        }
        return false;
    }
    public int operate(int a, int b, String c){
        switch(c){
            case "*": return a*b;
            case "+": return a+b;
            case "-": return a-b;
            case "/": return a/b;
        }
        return 0;
    }
}