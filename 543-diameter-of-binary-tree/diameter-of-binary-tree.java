/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    int maxDiameter=0;
    public int diameterOfBinaryTree(TreeNode root) {
        maxDiameter(root);
        return maxDiameter;
    }

    public int maxDiameter(TreeNode root){
        if(root==null) return 0;

        int left = maxDiameter(root.left);
        int right = maxDiameter(root.right);

        maxDiameter = Math.max(maxDiameter, left+right);

        return 1+Math.max(left, right);
    }
}