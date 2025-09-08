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
    public int kthSmallest(TreeNode root, int k) {
        ArrayList<Integer> arr = inOrder(root, new ArrayList<>());
        return arr.get(k-1);
    }

    ArrayList<Integer> inOrder(TreeNode root, ArrayList<Integer> arr){
        if(root==null) return arr;
        inOrder(root.left, arr);
        arr.add(root.val);
        return inOrder(root.right, arr);
    }
}