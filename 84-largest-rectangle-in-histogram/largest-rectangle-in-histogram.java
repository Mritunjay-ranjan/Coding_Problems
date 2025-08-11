class Solution {
    public int largestRectangleArea(int[] heights) {
        int maxArea = 0;
        Stack<Integer> stack = new Stack<>();
        int n = heights.length;
        for(int i=0;i<=n;i++){
            int currHeight = (i==n)? 0: heights[i];
            while(!stack.isEmpty() && heights[stack.peek()]>currHeight){
                
                int height = heights[stack.pop()];
                int width = stack.isEmpty()? i: i - stack.peek()-1;
                
                maxArea = Math.max(maxArea, height * width);
            }
            stack.push(i);
        }
        return maxArea;
    }
}